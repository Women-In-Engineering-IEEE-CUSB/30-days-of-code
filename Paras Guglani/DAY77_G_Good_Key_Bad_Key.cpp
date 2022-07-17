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
/* We will prove it is always optimal to use good keys for a prefix then only use bad keys. Consider we have used a bad key then a good key, by doing this we obtain ⌊ai2⌋+⌊ai+12⌋−k coins. If we switch and use a good key first, the a bad key then we obtain ai+⌊ai+12⌋−k, this number is clearly bigger so we will never encounter a bad key before a good key in an optimal solution, thus we will use a prefix of good keys then move on to using bad keys.

For every possible prefix of good keys we will calculate the coins we get at the end. We do this by maintaining a variable with the prefix sum where we use the good keys and then calculate what we will get from the chests where we use bad keys. Notice that because we halve all the chests when we use a bad key we only need to verify the next log2(109)≈30 chests, all chests after it will go to 0 coins.

Final complexity O(nlog(ai))
 */

void pgsolve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    int ans = 0;
    int sum = 0;
    for (int i = -1; i < n; i++)
    {
        int now = sum;
        for (int j = i + 1; j < min(n, i + 32); j++)
        {
            int copy = a[j];
            copy >>= j - i;
            now += copy;
        }
        ans = max(ans, now);
        // for next iteration
        if (i + 1 != n)
        {
            sum += a[i + 1] - k;
        }
    }
    cout << ans << endl;
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