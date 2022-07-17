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
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n;
    cin >> n;
    vi v(n);
    vi v2(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    rep(i, n)
    {
        cin >> v2[i];
    }
    sort(all(v2));
    sort(all(v));
    int half = n / 2;
    if (n % 2 == 1)
    {
        vi ans;
        REP(i, half, n)
        {
            int ele = v[i] + v2[n + half - 1 - i];
            ans.pb(ele);
        }
        sort(all(ans));
        int res = ans[0];
        cout << res << endl;
        return;
    }
    vi ans;
    REP(i, half - 1, n)
    {
        int ele = v[i] + v2[n + half - 2 - i];
        ans.pb(ele);
    }
    sort(all(ans));
    int res = (ans[0] + ans[1]) / 2;
    cout << res;

    cout << endl;
    /*
    second method
    Step 1: We first sort both AA and BB
    Step 2: For the first M−1 elements of AA, we can pair A_i with B_i.
    These elements can be very small, they won’t affect our result.
    Step 3: For the final MM elements, we pair A_M​ with B_NB, A_{M+1}​with B_{N-1}, A_{M+2}with B_{N-2} dots⋯, A_N ​with B_M
    int ans = 2e9;
    int k = n - 1;
    for (int i = (n - ((n / 2) + 1)); i < n; i++)
    {
    ans = min(ans, a[i] + b[k--]);
    }
    cout << ans << endl; */
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
