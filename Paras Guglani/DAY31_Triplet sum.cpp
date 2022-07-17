/*
Given a random integer array and a number x. Find and print the triplets of elements in the array which sum to x.
While printing a triplet, print the smallest element first.
That is, if a valid triplet is (6, 5, 10) print "5 6 10". There is no constraint that out of 5 triplets which have to be printed on 1st line. You can print triplets in any order, just be careful about the order of elements in a triplet.
Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x
Output format :
Line 1 : Triplet 1 elements (separated by space)
Line 2 : Triplet 3 elements (separated by space)
Line 3 : and so on
Constraints :
1 <= N <= 1000
1 <= x <= 100
Sample Input:
7
1 2 3 4 5 6 7
12
Sample Output ;
1 4 7
1 5 6
2 3 7
2 4 6
3 4 5
*/

#include <bits/stdc++.h>
using namespace std;

// simple brute forse method
void FindTriplet(int arr[], int size, int x)
{

    sort(arr, arr + size);
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == x)
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }
}
// O(n^2) with sorting and two pointer method
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    // Sorting the vector.
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        int target = K - arr[i];
        int front = i + 1;
        int back = n - 1;

        while (front < back)
        {
            int sum = arr[front] + arr[back];

            // Finding answer which starts from arr[i].
            if (sum < target)
            {
                front++;
            }

            else if (sum > target)
            {
                back--;
            }

            else
            {
                int x = arr[front];
                int y = arr[back];
                ans.push_back({arr[i], arr[front], arr[back]});

                // Incrementing front pointer until we reach a different number.
                while (front < back && arr[front] == x)
                {
                    front++;
                }
                // Decrementing last pointer until we reach a different number.
                while (front < back && arr[back] == y)
                {
                    back--;
                }
            }
        }

        // Ensuring that we don't encounter duplicate values for arr[i].
        while (i + 1 < n && arr[i] == arr[i + 1])
        {
            i++;
        }
    }
    return ans;
}

// try to do better

int main()
{
    int n, x;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    FindTriplet(a, n, x);
    delete[] a;
    return 0;
}