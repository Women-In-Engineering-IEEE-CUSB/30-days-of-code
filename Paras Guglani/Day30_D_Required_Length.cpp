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
int countDigit(long long n)
{
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int largest_Digit(int n)
{
    int largest = 0;

    while (n)
    {
        int r = n % 10;
        // Find the largest digit
        largest = max(r, largest);
        n = n / 10;
    }
    return largest;
}
void pgsolve()
{
    //think accurate logic
    int i, j, n, x;
    cin >> n >> x;
    if (x == 1)
    {
        cout << -1 << endl;
        return;
    }
    int steps = 0;
    while (countDigit(x) < n)
    {
        int largest = largest_Digit(x);
        x = x * largest;

        cout << "largest is " << largest << " x is " << x << endl;
        steps++;
    }
    cout << steps << endl;

// largest is 4 x is 168
// 168*6 1008
// largest is 8 x is 1344
// largest is 4 x is 5376
// largest is 7 x is 37632
// largest is 7 x is 263424
// largest is 6 x is 1580544
// largest is 8 x is 12644352
// largest is 6 x is 75866112
// largest is 8 x is 606928896
// largest is 9 x is 5462360064
// largest is 6 x is 32774160384
// largest is 8 x is 262193283072
// largest is 9 x is 2359739547648
// 13
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

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}