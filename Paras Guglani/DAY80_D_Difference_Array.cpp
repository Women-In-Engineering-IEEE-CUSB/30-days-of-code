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
/* Let's prove that the brute-force solution (considering zeros differently) can pass.

Define S=∑i=1nai and it changes when an operation is performed.

After sorting the array a and ignoring 0 s, the fact

n−1+ann−1≤S≤S−an(ai≥1)
is always true.

And after performing one operation, S=an−a1≤an.

So in each operation, you cost O(nlogn) time to sort the new array and decrease S by at least n−1.

After the first operation, S is O(an). The complexity is O(AlogA), where A=max{n,an}.
 */
#define ch() getchar()
#define pc(x) putchar(x)
template <typename T>
void read(T &x)
{
    static char c;
    static int f;
    for (c = ch(), f = 1; c < '0' || c > '9'; c = ch())
        if (c == '-')
            f = -f;
    for (x = 0; c >= '0' && c <= '9'; c = ch())
        x = x * 10 + (c & 15);
    x *= f;
}
template <typename T>
void write(T x)
{
    static char q[65];
    int cnt = 0;
    if (x < 0)
        pc('-'), x = -x;
    q[++cnt] = x % 10, x /= 10;
    while (x)
        q[++cnt] = x % 10, x /= 10;
    while (cnt)
        pc(q[cnt--] + '0');
}
const int maxn = 100005;
int a[maxn];

void pgsolve()
{
    int n;
    read(n);
    for (int i = 1; i <= n; ++i)
        read(a[i]);
    for (int i = n - 1; i >= 1; --i)
    {
        int pre = a[i + 1], ok = false;
        for (int j = i; j >= 1; --j)
        {
            ok = (a[j] == 0);
            pre -= (a[j] = pre - a[j]);
            if (ok)
            {
                sort(a + j, a + i + 1);
                break;
            }
        }
        if (!ok)
            sort(a + 1, a + i + 1);
    }
    write(a[1]), pc('\n');
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
