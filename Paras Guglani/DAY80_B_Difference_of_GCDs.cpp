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
/*
gcd(i, ai)≤i.Because all gcd(i, ai) are different, then gcd(i,ai)=i, which means ai is the multiple of i.

To check if there is such ai, just check if ai=(⌊l−1i⌋+1)⋅i (the minimum multiple of i that is strictly bigger than l−1) is less than r.

Time complexity O(n) for each test case.

 */
void pgsolve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vi v(n);
    REP(i, 1, n + 1)
    {
        int first = l / i;
        int last = r / i;

        first = first * i;
        last = last * i;

        if (first > r || last < l)
        {
            cout << "NO" << endl;
            return;
        }
        v[i - 1] = last;
    }
    cout << "YES" << endl;

    rep(i, n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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
