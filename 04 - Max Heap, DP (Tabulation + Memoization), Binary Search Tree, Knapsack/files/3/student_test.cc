#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(MyTest, Test1) 
{
    //Empty Tree
    BinaryTreeNode* root2 = nullptr;
    EXPECT_EQ(IsBST(root2),true);

    // Tree with only one node.
    BinaryTreeNode* root1 = new BinaryTreeNode(10);
    EXPECT_EQ(IsBST(root1),true);

    // Tree with Multiple nodes
    BinaryTreeNode* root = new BinaryTreeNode(4);
    root->left = new BinaryTreeNode(2);
    root->right = new BinaryTreeNode(5);
    root->left->left = new BinaryTreeNode(1);
    root->left->right = new BinaryTreeNode(3);
    EXPECT_EQ(IsBST(root),true);

    std::map<Statistics, int> statistics = FindStatistics(root);
    EXPECT_EQ(statistics[Statistics::kHeight], 3);
    EXPECT_EQ(statistics[Statistics::kMax], 5);
    EXPECT_EQ(statistics[Statistics::kMin], 1);
    EXPECT_EQ(statistics[Statistics::kNumberOfLeaves], 3);
    EXPECT_EQ(statistics[Statistics::kNumberOfNodes], 5);
    EXPECT_EQ(statistics[Statistics::kNumberOfSingleChildNodes], 0);
}

TEST(MyTest2, Test2) 
{
    BinaryTreeNode* root = new BinaryTreeNode(2);
    root->left = new BinaryTreeNode(4);
    root->right = new BinaryTreeNode(5);
    root->left->left = new BinaryTreeNode(1);
    root->left->right = new BinaryTreeNode(3);
    EXPECT_EQ(IsBST(root),false);

    std::map<Statistics, int> statistics = FindStatistics(root);
    EXPECT_EQ(statistics[Statistics::kHeight], 3);
    EXPECT_EQ(statistics[Statistics::kMax], 5);
    EXPECT_EQ(statistics[Statistics::kMin], 1);
    EXPECT_EQ(statistics[Statistics::kNumberOfLeaves], 3);
    EXPECT_EQ(statistics[Statistics::kNumberOfNodes], 5);
    EXPECT_EQ(statistics[Statistics::kNumberOfSingleChildNodes], 0);
}

TEST(MyTest3, Test3) 
{
    BinaryTreeNode* root = new BinaryTreeNode(8);
    root->left = new BinaryTreeNode(3);
    root->right = new BinaryTreeNode(10);
    root->left->left = new BinaryTreeNode(1);
    root->left->right = new BinaryTreeNode(6);
    root->right->right = new BinaryTreeNode(14);
    root->left->right->left = new BinaryTreeNode(4);
    root->left->right->right = new BinaryTreeNode(7);
    root->right->right->left = new BinaryTreeNode(13);
    EXPECT_EQ(IsBST(root),true);

    std::map<Statistics, int> statistics = FindStatistics(root);
    EXPECT_EQ(statistics[Statistics::kMax], 14);
    EXPECT_EQ(statistics[Statistics::kMin], 1);
    EXPECT_EQ(statistics[Statistics::kNumberOfLeaves], 4);
    EXPECT_EQ(statistics[Statistics::kNumberOfNodes], 9);
    EXPECT_EQ(statistics[Statistics::kNumberOfSingleChildNodes], 2);    
    EXPECT_EQ(statistics[Statistics::kHeight], 4);
}

