#include "q.h"
#include<limits.h>
#include <iostream>
#include <vector>
// Implement each function of `q.h` here.

//Function to determine if given Binary tree is a valid BST or not
bool IsBST(BinaryTreeNode *root)
{
    if (root == nullptr)
    {
        return true;
    }

    else
    {
        if (root->left != nullptr && (root->left->val) >= root->val)
        {
            return false;
        }

        if (root->right != nullptr && root->right->val <= root->val)
        {
            return false;
        }

        return IsBST(root->left) && IsBST(root->right);
    }
}


//Finding Statistics about a given tree
std::map<Statistics, int> FindStatistics(BinaryTreeNode *root)
{
    std::map<Statistics, int> result = {
        {Statistics::kHeight,0},
        {Statistics::kNumberOfLeaves,0},
        {Statistics::kMin,INT_MAX},
        {Statistics::kMax,INT_MIN},
        {Statistics::kNumberOfSingleChildNodes,0},
        {Statistics::kNumberOfNodes,0},
    };

    FindStatistics_Helper(root,1,result);
    return result;
}

//A helper function used by FindStatistics
void FindStatistics_Helper(BinaryTreeNode *root, int current_level,std::map<Statistics, int> &statistics)
{
    if (root == NULL)
    {
        return;
    }

    //Number of nodes
    statistics[Statistics::kNumberOfNodes]++;


    //Finding if a node is a leaf
    if (root->left == nullptr && root->right == nullptr)
    {
        statistics[Statistics::kNumberOfLeaves]++;
    }

    //Finding if node has single childs
    if ((root->left == nullptr and root->right) || (root->right == nullptr and root->left))
    {
        statistics[Statistics::kNumberOfSingleChildNodes]++;   
    }

    //height
    statistics[Statistics::kHeight] = std::max(statistics[Statistics::kHeight],current_level);

    //min
    statistics[Statistics::kMin] = std::min(statistics[Statistics::kMin],root->val);

    //Max
    statistics[Statistics::kMax] = std::max(statistics[Statistics::kMax],root->val);

    FindStatistics_Helper(root->right, current_level+1, statistics);
    FindStatistics_Helper(root->left, current_level+1,statistics);

}
                        