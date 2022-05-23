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
    int i, multiply, n, m;
    cin >> n;
    int a[n], a2[n];
    int sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        a2[i] = a[i];
        sum = sum + a[i];
    }

    sort(a, a + n);
    m = ceil(log2(sum));
    auto c = find(a2, a2 + n, a[0]);
    multiply = ((pow(2, m) - sum) + a[0]) / a[0];

    if ((sum & sum - 1) == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << 1 << " " << multiply;
        cout << endl;
        cout << (distance(a2, c)) + 1 << endl;
    }
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
    freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}