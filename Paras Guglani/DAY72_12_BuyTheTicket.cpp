/* Problem Statement: Buy the ticket
Problem Level: MEDIUM
Problem Description:
You want to buy a ticket for a well-known concert which is happening in your city. But the number of tickets available is limited. Hence the sponsors of the concert decided to sell tickets to customers based on some priority.
A queue is maintained for buying the tickets and every person has attached with a priority (an integer, 1 being the lowest priority). The tickets are sold in the following manner -
1. The first person (pi) in the queue asked to comes out.
2. If there is another person present in the queue who has higher priority than pi, then ask pi to move at end of the queue without giving him the ticket.
3. Otherwise, give him the ticket (and don't make him stand in queue again).
Giving a ticket to a person takes exactly 1 minutes and it takes no time for removing and adding a person to the queue. And you can assume that no new person joins the queue.
Given a list of priorities of N persons standing in the queue and the index of your priority (indexing starts from 0). Find and return the time it will take until you get the ticket.
Input Format :
Line 1 : Integer N (Total number of people standing in queue)
Line 2 : Priorities of every person (n space separated integers)
Line 3 : Integer k (index of your priority)

Output Format :
Time required

Sample Input 1 :
3
3 9 4
2

Sample Output 1 :
2

Sample Output 1 Explanation :
Person with priority 3 comes out. But there is a person with higher priority than him. So he goes and then stands in the queue at the end. Queue's status :  {9, 4, 3}. Time : 0 secs.
Next, the person with priority 9 comes out. And there is no person with higher priority than him. So he'll get the ticket. Queue's status :  {4, 3}. Time : 1 secs.
Next, the person with priority 4 comes out (which is you). And there is no person with higher priority than you. So you'll get the ticket. Time : 2 secs.
Sample Input 2 :
5
2 3 2 2 4
3

Sample Output 2 :
4
 */

#include <bits/stdc++.h>
using namespace std;

//array rotation complexity is more
/* 
void leftRotateByOne(int *arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
int buyTicket(int *arr, int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    int time = 0;
    int size = n;
    while (true)
    {
        if (pq.top() == arr[0] && k == 0)
        {
            time++;
            break;
        }
        else if (pq.top() == arr[0] && k != 0)
        {
            time++;
            pq.pop();
            leftRotateByOne(arr, size);
            size--;
            k--;
        }
        else if (pq.top() != arr[0] && k == 0)
        {
            leftRotateByOne(arr, size);
            k = size - 1;
        }
        else
        {
            leftRotateByOne(arr, size);
            k--;
        }
    }
    return time;
} */

int buyTicket(int *arr, int n, int k)
{

    queue<int> p; // a queue of indices
    for (int i = 0; i < n; i++)
        p.push(i);

    priority_queue<int> pq;
    // build a heap
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    int time = 0;

    while (p.front() != k || pq.top() != arr[p.front()]) // unless ticket counter meets me and i am the priority .
    {                                                    // if less priority send at end of queue
        if (pq.top() > arr[p.front()])
        {
            int x = p.front();
            p.pop();
            p.push(x);
        }

        else if (pq.top() == arr[p.front()])
        {
            pq.pop();
            p.pop();
            time++; // incres time
        }
    }
    return time + 1; // now i will be getting the ticket
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << buyTicket(arr, n, k);
    delete[] arr;

    return 0;
}