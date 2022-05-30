// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).
// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
// Input
// t – the number of test cases, then t test cases follows.
// * Line 1: Two space-separated integers: N and C
// * Lines 2..N+1: Line i+1 contains an integer stall location, xi
// Output
// For each test case output one integer: the largest minimum distance.
// Sample Input :
// 1
// 5 3
// 1
// 2
// 8
// 4
// 9
// Sample Output:
// 3
// Output details:
// FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
// resulting in a minimum distance of 3.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll stalls[], ll n, ll c, ll d)
{
    int count = 1;
    int prev = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if ((stalls[i] - prev) >= d)
        {
            count++;
            prev = stalls[i];
        }
        if (count == c) //* all cows placed
        {
            return true;
        }
    }
    return false;
}

int main()
{
    //* O(logD *N)
    // D == possibile max distance
    // N = number of stalls (to check distance)
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        ll stalls[n];
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }

        // sort stalls -nlogn
        sort(stalls, stalls + n);

        // using bin search find max possible distance
        ll start = stalls[0];               // min dist possible
        ll end = stalls[n - 1] - stalls[0]; // max dist possible
        int max_dist = INT_MIN;
        while (start <= end)
        {
            // safe way to get mmiddle - no overflow
            ll mid = start + (end - start) / 2;
            if (check(stalls, n, c, mid))
            {
                // if i can arrange the cows at mid then i will try from mid to end
                // else i will try for start to mid
                start = mid + 1;
                if (max_dist < mid)
                {
                    max_dist = mid;
                }
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << max_dist << endl;
    }
}

int aggresiveCow_baseAproch(int arr[], int n, int cow)
{
    //* O(D*N)
    // D == possibile max distance
    // N = number of stalls (to check distance)

    int max_dist = 0;
    for (int i = 1; i <= arr[n - 1] - arr[0]; i++)
    {
        int count = 1;
        int last_pos = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] - arr[last_pos] >= i)
            {
                count++;
                last_pos = j;
                if (count >= cow)
                {
                    max_dist = i;
                    break;
                }
            }
            if (j == n && j < 3)
            {
                return max_dist;
            }
        }
    }
    return max_dist;
};