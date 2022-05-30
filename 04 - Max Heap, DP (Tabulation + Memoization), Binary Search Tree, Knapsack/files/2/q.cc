#include "q.h"
#include<limits.h>
#include <iostream>
#include <list>
#include <stack>
#include <vector>

// Implement each function of `q.h` here.
//Fibonacci
int Fibonacci(int n)
{
    int a = 1;
    int b = 1;
    int temp = 1;
    if (n == 0)
    {
        return a;
    }
    if (n==1)
    {
        return b;
    }
    for (int i = 2; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return temp;
}

int CoinChangeMemo(std::vector<int>& coins, int amount)
{
    std::list<int> memo;
    return CoinChangeMemo_Helper(coins,amount,memo);
}

int CoinChangeMemo_Helper(std::vector<int>& coins, int amount, std::list<int>& memo)
{
    if (amount == 0) 
    {
        return 0;
    }

    if (amount < 0) 
    {
        return -1;
    }


    // if (*(std::next(memo.begin(), amount)) != INT_MIN) 
        // {
        //     return *(std::next(memo.begin(), amount));
        // }

        // int minimum = INT_MAX;
        // for (auto i : coins) {
        //     int val = CoinChangeMemo_Helper(coins, amount - i, memo);
        
        //     if (val >= 0) {
        //     minimum = std::min(val, minimum);
        //     }
        // }


    std::list<int>::iterator iterator;

    iterator = memo.begin();

    for (int n = memo.size();n<=amount;n++) {
      memo.push_back(INT_MIN);
    }


    int counter = INT_MAX;
    for (int n=0; n < coins.size(); n++)
    {
      int coinValue = coins[n];

      int i = CoinChangeMemo_Helper(coins, amount - coinValue, memo);
      if(i >= 0) {
        counter = std::min(i, counter);
      } 
    }

    // if (minimum >= 0 && minimum < INT_MAX) {
    //     *(std::next(memo.begin(), amount)) = 1 + minimum;
    // } else {
    //     *(std::next(memo.begin(), amount)) = -1;
    // }

    // return *(std::next(memo.begin(), amount));
    
    iterator = memo.begin(); 
    advance(iterator, amount);
    if (counter >= 0 && counter < INT_MAX) {
        *iterator = counter+1;
      
    }
    else {
      *iterator = -1;
    }

    return *iterator; 

}

int CoinChangeTabulation(std::vector<int>& coins, int amount) 
{
  std::list<int> amount_list;
  for (int i = 0; i <= amount; ++i) 
  {
    amount_list.push_back(0);
  }

  for (int i = 1; i <= amount; i++) 
  {
    *(std::next(amount_list.begin(), i)) = INT_MAX - 1;

    for (auto coin : coins) 
    {
      if (i - coin >= 0) 
      {
        *(std::next(amount_list.begin(), i)) = std::min(*(std::next(amount_list.begin(), i - coin)) + 1, *(std::next(amount_list.begin(), i)));
      }
    }
  }

  return *(std::next(amount_list.begin(), amount)) > amount ? -1 : *(std::next(amount_list.begin(), amount));
}