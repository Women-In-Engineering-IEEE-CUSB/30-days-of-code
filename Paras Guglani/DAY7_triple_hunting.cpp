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
    int n, m;
    int count = 0;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];

    rep(i, n)
    {
        if (a[i] % 3 == 0)
        {

            count++;
         
        }
    }
    if (count == 0)
    {
        cout << "Nothing here";
        return;
    }
    cout << count << endl;
    rep(i, n)
    {
        if (a[i] % 3 == 0)
        {
            cout << i + 1 << " ";
        }
    }
   
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();


    // Input File: tripin.txt
    freopen("tripin.txt", "r", stdin);
    // Output File: tripout.txt
    freopen("tripout.txt", "w", stdout);

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
// #ifdef __GNUC__
//     cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
// #endif
    return 0;
}