/*
Coding Problem
Problem Statement: Height of generic Tree
Problem Level: EASY
Problem Description:
Given a generic tree, find and return the height of given tree.
Input format:
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output prints the height of the given generic tree.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 1:
3
 */

#include <bits/stdc++.h>
#include "Tree.cpp"
using namespace std;

int main()
{
    TreeNode<int> *root = takeInputLevelOrder();
    cout << getHeight(root) << endl;
    return 0;
}
