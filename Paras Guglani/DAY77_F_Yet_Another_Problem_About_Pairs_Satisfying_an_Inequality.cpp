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
void pgsolve()
{
    int n;
    cin >> n;

    vi v1, v2;
    int x;
    rep(i, n)
    {
        cin >> x;
        if (x < i + 1)
        {
            v2.pb(x);
            v1.pb(i + 1);
        }
    }
    sortall(v2);
    sortall(v1);

    int res = 0;
    rep(i, v2.size())
    {
        // distance from first element = number of pairs for v2[i]
        int distance = (lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin());
        // cout << distance << " ";
        res = res + distance;
    }

    /*
    int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long res = 0;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= i)
            {
                continue;
            }
            res += (long long)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
            v.push_back(i);
        }
     */
    cout << res << endl;
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