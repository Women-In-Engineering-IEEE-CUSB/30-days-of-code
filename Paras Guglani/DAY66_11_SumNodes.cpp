/*

Chapter Assignment
Problem Statement: Sum Of Nodes
Problem Level: EASY
Problem Description:
For a given Binary Tree of integers, find and return the sum of all the nodes data.
Example:
                        10
                      /      \
                    20      30
                   /    \
                 40    50

When we sum up all the nodes data together, [10, 20, 30, 40 50] we get 150. Hence, the output will be 150.

Input Format:
The first and the only line of input will contain the nodes data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.

Output Format:
The first and the only line of output prints the sum of all the nodes data present in the binary tree.

Note:
You are not required to print anything explicitly. It has already been taken care of.

Constraints:
1 <= N <= 10^6
Where N is the total number of nodes in the binary tree.

Time Limit: 1 sec

Sample Input 1:
2 3 4 6 -1 -1 -1 -1 -1

Sample Output 1:
 15

Sample Input 2:
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

Sample Output 2:
 28


 */

#include <bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;
int getSum(BinaryTreeNode<int> *root)
{
    if (!root)
    {
        return 0;
    }
    int sum = root->data;
    sum += getSum(root->left);
    sum += getSum(root->right);
    return sum;
}

int main()
{
    BinaryTreeNode<int> *root = taktInputLevelorder();
    // printLevelorder(root);
    cout << getSum(root);
    return 0;
}