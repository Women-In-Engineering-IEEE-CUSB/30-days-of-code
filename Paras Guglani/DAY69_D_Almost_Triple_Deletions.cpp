/* Lemma: An array a1,a2,…,an can be fully deleted via a sequence of operations if and only if it satisfies both of the following constraints:

n is even

The maximum frequency of any element in the array is at most n2.

Proof
If n is odd, then any final array will also have an odd length, which can't be 0.

An optimal strategy is to always delete one of the most frequent elements and any one of its neighbours. If the most frequent element occurs k>n2 times, then the final array will have at least n−2⋅(n−k)=2⋅k−n>0 elements. Otherwise, this strategy ensures the full deletion of the array, since, after performing an operation, it is impossible for an element to occur more than n−22 times in the array.

Since the maximum frequency of a value for every subsequence [al,al+1,…,ar] can be computed in O(n2), it is possible to precompute all subsequences which can be deleted via a sequence of operations.

Let dp[i] be the maximum length of a final array consisting of ai and some subarray from the first i−1 elements. Initially, dp[i] is set to 1 if the prefix [a1,a2,…,ai−1] can be fully deleted. Otherwise, dp[i]=0.

For every pair of indices i and j (1≤j<i≤n,ai=aj), if we can fully delete the subsequence [aj+1,aj+2,…ai−1], then we can append ai to any final array ending in aj. Naturally, dp[i] will be strictly greater than dp[j]. This gives us the following recurrence:

dp[i]=maxi−1j=1(dp[j]>0 and ai=aj and [aj+1,aj+2,…,ai−1] is deletable)⋅(dp[j]+1)
If we define a final array as a subarray of equal elements from the array a, to which an+1 is forcefully appended, then the final answer can be written as dp[n+1]−1. Note that, when computing dp[n+1], aj should not be compared to an+1.

Total time complexity per testcase: O(n2).
 */
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define PI 3.1415926535897932384626
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
const ll NMAX = 5e3 + 5;

ll dp[NMAX], fr[NMAX], a[NMAX];
void pgsolve()
{

    ll n, maxfreq = 0;

    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    dp[0] = dp[n + 1] = 0;

    for (ll j = 1; j <= n; j++)
        fr[j] = 0;
    for (ll i = 1; i <= n + 1; i++)
    {
        if (i % 2 && maxfreq <= i / 2)
            dp[i] = 1;
        else
            dp[i] = 0;
        maxfreq = max(maxfreq, ++fr[a[i]]);
    }
    for (ll i = 1; i <= n; i++)
    {

        for (ll j = 1; j <= n; j++)
            fr[j] = 0;
        maxfreq = 0;

        if (dp[i] > 0) /// If there is no subarray ending in a[i], then some subarrays beginning with a[j] might be incorrectly flagged as possible final arrays
            for (ll j = i + 1; j <= n + 1; j++)
            {
                if ((j - i) % 2 && maxfreq <= (j - i) / 2 && (j == n + 1 || a[i] == a[j]))
                    dp[j] = max(dp[j], dp[i] + 1);

                maxfreq = max(maxfreq, ++fr[a[j]]);
            }
    }
    cout << dp[n + 1] - 1 << '\n';
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}