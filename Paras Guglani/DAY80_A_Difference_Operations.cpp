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
Proof of necessity

a2 must be the multiple of a1. Otherwise a2 cannot become zero.

In the whole process, a2 is always the multiple of a1. So a3 must be the multiple of a1. Otherwise a3 cannot become zero.

In the whole process, a3 is always the multiple of a1. So a4 must be the multiple of a1. Otherwise a4 cannot become zero.

...

Proof of sufficiency

For all i≥2, ai is the multiple of a1. So we can perform operations to make a=[a1,a1,a1,⋯] and then make  a=[a1,0,0,⋯] */

void pgsolve()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int divisible= a[0];
    rep(i, n)
    {
        if(a[i]%divisible!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout << "YES" << endl;
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
