#include "q.h"
#include<limits.h>
#include <iostream>
#include <vector>
// Knapsack Dynamic Programming
int knapSack01NoDynamicProgramming(const std::vector<int> &weights,const std::vector<int> &values, int w)
{
    int max_value = knapSack01NoDynamicProgramming_Helper(weights,values,w,weights.size()-1);
    return max_value;
}

//knapSack01NoDynamicProgramming_Helper
int knapSack01NoDynamicProgramming_Helper(const std::vector<int> &weights, const std::vector<int> &values, int w, int i)
{
    if (i == -1 || w == 0)
    {
        return 0;
    }

    if (weights[i]>w)
    {
        return knapSack01NoDynamicProgramming_Helper(weights,values,w,i-1);
    }

    return std::max(knapSack01NoDynamicProgramming_Helper(weights,values,w,i-1),values[i]+knapSack01NoDynamicProgramming_Helper(weights,values,w-weights[i],i-1));
}

//Knapsack Memoization
int knapSack01Memo(const std::vector<int> &weights, const std::vector<int> &values, int w)
{
    int size = weights.size();
    std::vector<std::vector<int>> memo (size+1,std::vector<int> (w+1, INT_MIN));
    int max_value = knapSack01Memo_Helper(weights, values, w, size-1, memo);
    return max_value;
}

//Knapsack Memoization Helper
int knapSack01Memo_Helper(const std::vector<int> &weights, const std::vector<int> &values, int w, int i, std::vector<std::vector<int>> &memo)
{
    if(i == 0 || w == 0)
    {
        return 0;
    }

    if ( memo[i][w] != INT_MIN)
    {
        return memo[i][w];
    }

    if (weights[i] > w)
    {
        memo[i][w] = knapSack01Memo_Helper(weights,values,w,i-1,memo);
        return memo[i][w];
    }

    memo[i][w] = std::max(knapSack01Memo_Helper(weights,values,w,i-1,memo),values[i]+knapSack01Memo_Helper(weights,values,w-weights[i],i-1,memo));
    return memo[i][w];

    // if(memo[i][w]==INT_MIN)
    // {
    //     if(weights[i-1] <= w)
    //     {
    //         return memo[i][w] = std::max(knapSack01Memo_Helper(weights, values, w, i-1, memo), 
    //                         values[i-1] + knapSack01Memo_Helper(weights,values, w - weights[i-1], i -1, memo ));  
            
    //     }
    //     else
    //     {
    //         return memo[i][w] = knapSack01Memo_Helper(weights, values, w, i-1, memo);
    //     }
    // }

}


//Knapsack Tabulation
int knapSack01Tablulation(const std::vector<int> &weights,const std::vector<int> &values, int w)
{
    std::vector<std::vector<int>> d(values.size()+1,std::vector<int> (w+1,0));

    for (int i = 0; i <= weights.size(); i++)
    {
        for (int W = 0; W <= w; W++)
        {
            if (i == 0 || W == 0)
            {
                d[i][W] = 0;
            }
            else if (weights[i-1]>W)
            {
                d[i][W] = d[i-1][W];
            }
            else
            {
                d[i][W] = std::max(values[i-1]+d[i-1][W - weights[i-1]],d[i-1][W]);
            }
            
        }
    }

    return d[values.size()][w];
}