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
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    cout << a[0] << endl;
    /* int xorn = 0;
    rep(i, n)
    {
        xorn ^= a[i];
    }
    rep(i, n)
    {
        xorn ^= a[i];
        if (xorn == a[i])
        {
            cout << a[i] << endl;
            break;
        }
        else
        {
            xorn ^= a[i];
        }
    } */
    /*
        Any element of the array works. Let's use ⊕ for XOR.

    Suppose that the original array is [a1,…,an−1]. Then x=a1⊕⋯⊕an−1.

    Let's show that a1 is the XOR of all other elements of the array; that is, a1=a2⊕⋯⊕an−1⊕x. Substituting x=a1⊕⋯⊕an−1, we have
    a1=a2⊕⋯⊕an−1⊕a2⊕⋯⊕an−1.
    There are two occurences of a2,…,an on the right-hand side and only one occurrence of a1. Since y⊕y=0 for all y, the a2,…,an−1 all cancel out, leaving only a1.

    More formally, we can write the following.
    a1=?a2⊕⋯⊕an−1⊕x=a2⊕⋯⊕an−1⊕(a1⊕⋯⊕an−1)=a2⊕⋯⊕an−1⊕(a1⊕a2⊕⋯⊕an−1)=(a2⊕⋯⊕an−1)⊕a1⊕(a2⊕⋯⊕an−1)=a1⊕(a2⊕⋯⊕an−1)⊕(a2⊕⋯⊕an−1)=a1.
    The same proof follows for any ai. Hence you can output any element of the array.

    The time complexity is O(n). */
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