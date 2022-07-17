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
    int a[n], b[n];
    int maxa=0;
    int maxb=0;
    rep(i, n)
    {
        cin >> a[i];
        maxa=max(a[i],maxa);
    }
    rep(i, n)
    {
        cin >> b[i];
        maxb = max(b[i], maxb);
    }
    ll diff = 0;
    ll flag = 1;
    rep(i,n)
    {
        if (b[i] > 0)
            flag = 0;
    }
    if (flag)
    {
        cout << "YES\n";
        return;
    }
    rep(i,n)
    {
        if (a[i] > 0 && b[i] > 0)
        {
            diff = a[i] - b[i];
        }
        if (a[i] < b[i])
        {
            cout << "NO\n";
            return;
        }
    }
    rep(i,n)
    {
        if (a[i] <= diff)
            a[i] = 0;
        else
            a[i] -= diff;
    }
    rep(i,n)
    {
        if (a[i] != b[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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