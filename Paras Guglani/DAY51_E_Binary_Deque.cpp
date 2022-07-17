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
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
/* 

Note that the remaining array is a subarray of the original array. There are many ways to approach the problem. Here is one solution, which the main solution uses:

Compute prefix sums on the array, so we can find out the value of al+⋯+ar quickly. Let's iterate through the left endpoint l from 1 to n. Afterwards, we can binary search on the smallest value of r such that al+⋯+ar=s, since this sum is strictly increasing.

The time complexity is  O(nlogn) */

int query(int l, int r, vi &p)
{
    return p[r] - (l ? p[l - 1] : 0);
}

void pgsolve()
{
    int n, s;
    cin >> n >> s;
    vi a(n), p(n);
    rep(i, n)
    {
        cin >> a[i];
        p[i] = a[i];
        if (i)
            p[i] += p[i - 1];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        int l = i, r = n - 1, pos = -1;
        while (l <= r)
        {
            int mid = l + r >> 1;
            if (query(i, mid, p) <= s)
            {
                pos = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (pos == -1 || query(i, pos, p) != s)
            continue;
        ans = min(ans, n - (pos - i + 1));
    }

    cout << (ans == INT_MAX ? -1 : ans) << "\n";

//wrong thinking misread question
    // int prefix[n];
    // prefix[0] = arr[0];
    // rep(i, n - 1)
    // {
    //     prefix[i + 1] = prefix[i] + arr[i + 1];
    // }
    // int suffix[n];
    // suffix[n - 1] = arr[n - 1];
    // REPR(i, n - 2, 0)
    // {
    //     suffix[i] = suffix[i + 1] + arr[i];
    // }
    // cout << prefix[0] << endl;
    // cout << suffix[n - 1] << endl;
    // cout << endl;
    // cout << "in loop "<<fullsum<<" req - "<<sum << endl;

    // rep(i, n)
    // {

    //     cout << prefix[i] << " ";
    //     cout << suffix[n-i-1] << endl;
    //     // if ((fullsum - (prefix[i] + suffix[n - i])) == sum)
    //     // {
    //     //     cout << i +1<< endl;
    //     //     return;
    //     // }
    // }
    // cout << endl;
    // rep(i, n)
    // {
    //     cout << suffix[i] << " ";
    // }
    cout << endl;
    cout << endl;
    cout << -1 << endl;
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