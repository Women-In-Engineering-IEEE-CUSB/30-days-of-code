/* Pair sum to 0
Send Feedback
Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
Note: Array A can contain duplicate elements as well.
Input format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.
Output format :
The first and only line of output contains the count of pair of elements in the array which sum up to 0. 
Constraints :
0 <= N <= 10^4
Time Limit: 1 sec
Sample Input 1:
5
2 1 -2 2 3
Sample Output 1:
2
 */
#include <bits/stdc++.h>
using namespace std;

void PairSum(int *arr, int n)
{
    sort(arr, arr + n);
    int starting_position_of_positive_elements = 0;
    while (arr[starting_position_of_positive_elements] < 0)
    {
        starting_position_of_positive_elements++;
    }
    map<int, int> m;
    for (int i = starting_position_of_positive_elements; i < n; i++)
    {
        m[arr[i]] += 1;
    }
    for (int i = 0; i < starting_position_of_positive_elements; i++)
    {
        int temp = m[-arr[i]];
        if (temp > 0)
        {
            while (temp--)
            {
                cout << arr[i] << " " << -arr[i] << endl;
            }
        }
    }
}

int getUniquePair(int arr[], int n)

{
    int count = 0;
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    while (i <= j)
    {
        int sum = arr[i] + arr[j];
        if (sum == 0)
        {
            count++;
            if (arr[i] != arr[i + 1] && arr[j] != arr[j - 1])
            {
                i++;
                j--;
            }
            else if (arr[i] == arr[i + 1] && arr[j] == arr[j - 1])
            {
                i++;
               
            }
            else if (arr[i] == arr[i + 1])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        else if (sum < 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getUniquePair(arr, n);
    return 0;
}