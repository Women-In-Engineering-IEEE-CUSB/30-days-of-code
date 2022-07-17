/*
Coding Problem
Problem Statement: Midpoint LinkedList
Problem Level: EASY
Problem Description:
For a given singly linked list of integers, find and return the node present at the middle of the list.
Note :
If the length of the singly linked list is even, then return the first middle node.

Example: Consider, 10 -> 20 -> 30 -> 40 is the given list, then the nodes present at the middle with respective data values are, 20 and 30. We return the first node with data 20.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output Format :
For each test case/query, print the data value of the node at the middle of the given list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit: 1sec

Sample Input 1 :
1
1 2 3 4 5 -1

Sample Output 1 :
3

Sample Input 2 :
2
-1
1 2 3 4 -1

Sample Output 2 :
2

*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int getLength(Node *head)
{
    if (head)
    {
        return getLength(head->next) + 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int data;
        cin >> data;
        Node *head = NULL;
        Node *tail = NULL;
        // input
        while (data != -1)
        {
            Node *newNode = new Node(data);
            if (!head)
            {
                head = newNode;
                tail = newNode;
            }

            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            cin >> data;
        }

        Node *temp = head;
        Node *temp2 = head;

        temp = head;
        int size = 0;

        while (temp)
        {
            // cout << temp->data << " ";
            temp = temp->next;
            size++;
        }

        temp = head;
        int mid;
        if (size % 2 == 0)
        {
            mid = size / 2;
        }
        else
        {
            mid = size / 2 + 1;
        }

        int i = 1;
        while (temp && i < mid)
        {
            temp = temp->next;
            i++;
        }
        if (temp)
            cout << temp->data << endl;
    }
    return 0;
}