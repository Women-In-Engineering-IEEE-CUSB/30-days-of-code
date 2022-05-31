/* Murder
Send Feedback
Once detective Saikat was solving a murder case. While going to the crime scene he took the stairs and saw that a number is written on every stair. He found it suspicious and decides to remember all the numbers that he has seen till now. While remembering the numbers he found that he can find some pattern in those numbers. So he decides that for each number on the stairs he will note down the sum of all the numbers previously seen on the stairs which are smaller than the present number. Calculate the sum of all the numbers written on his notes diary.
Answer may not fit in integer . You have to take long.
Input
First line gives T, number of test cases.

2T lines follow.

First line gives you the number of stairs N

Next line gives you N numbers written on the stairs.
Output
For each test case output one line giving the final sum for each test case.
Constraints
T<=10

1<=N<=10^5

All numbers will be between 0 and 10^6.
Sample Input:
1
5
1 5 3 6 4
Sample Output:
15
Explanation:
For the first number, the contribution to the sum is 0.
For the second number, the contribution to the sum is 1.
For the third number, the contribution to the sum is 1.
For the fourth number, the contribution to the sum is 9 (1+5+3).
For the fifth number, the contribution to the sum is 4 (1+3).
Hence the sum is 15 (0+1+1+9+4). */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(ll a[], int start, int mid, int end)
{
    ll prefixSum[mid - 1];
    // fillPrefixSum(a, mid - 1, prefixSum);
    int temp[end - start + 1];
    int k = 0;
    ll count = 0;
    int i = start, j = mid;
    for (; i < mid && j <= end;)
    {
        if (a[i] < a[j])
        {
            // here Count will be there
            // each element will be added length times
            count += (a[i] * (end - j + 1));
            temp[k++] = a[i++];
            
        }
        else
        {
            // here no Count will be there as a[i]>a[j]

            temp[k++] = a[j++];
        }
    }
    while (i < mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= end)
    {
        temp[k++] = a[j++];
    }
    // copy sorted temp back to unsorted array
    for (int i = start, j = 0; i <= end; i++, j++)
    {
        a[i] = temp[j];
    }
    return count;
}

ll merge_sort(ll a[], int start, int end)
{
    // here end is the last value (n-1)th, means this must be included
    ll count = 0;
    if (start < end)
    {
        int mid = (start + end) / 2;
        ll leftcnt = merge_sort(a, start, mid);
        ll rightcnt = merge_sort(a, mid + 1, end);
        ll mergecnt = merge(a, start, mid + 1, end);
        return leftcnt + rightcnt + mergecnt;
    }
    return count;
}

ll getCount(ll *arr, int n)
{
    // finding Count using merge _sort
    // divide array in 2 halves - sort and find Count in both arrays
    // merge 2 arrays and find Count while merging
    // calculate total Count
    ll ans = merge_sort(arr, 0, n - 1);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll *arr = new ll[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        cout << getCount(arr, n)<<endl;
        delete arr;
    }
}