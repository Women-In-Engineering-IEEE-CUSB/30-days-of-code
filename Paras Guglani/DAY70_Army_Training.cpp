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
// Attack value times× Defense value
// [B_{1}+B_{2}...+B_{r}] \times [(1000-B_{r+1})+(1000-B_{r+2})...+(1000-B_{n})][B 1+B 2...+B r]×[(1000−B r+1)+(1000−B r+2)...+(1000−Bn)]
//  [Sum(r)]×[(1000∗(n−r))−(B r+1+B r+2​ ...+B n​ )]
//  [Sum(r)]×[(1000∗(n−r))−(TotSum−Sum(r))]

void pgsolve()
{
    int n;
    cin >> n;

    int TotSum = 0, Sum = 0;
    int A[n];

    for (int j = 0; j < n; ++j)
    {
        cin >> A[j];
        TotSum += A[j];
    }

    sort(A, A + n, greater<int>()); // greater<int>() is used for sorting in descending order

    long long finalAnswer = 0;

    for (int r = 0; r < n; ++r)
    {
        finalAnswer = max(finalAnswer, (long long)(Sum) * ((1000 * (n - r)) - (TotSum - Sum)));
        Sum += A[r];
    }

    cout << finalAnswer << endl;
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