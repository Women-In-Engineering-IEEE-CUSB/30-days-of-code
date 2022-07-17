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
#define sz(v) (int)v.size()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
/* We divide each number from the multiset a by 2 as long as it is divisible without a remainder. Because if we can get a new number from the multiset a, we can also increase it to the original number by multiplication by 2.

Now notice that it does not make sense to use the first operation (multiplication by 2), because we get an even number, and only odd numbers remain in the multiset a.

Then we take the largest number from b and if it is in a, we remove this number from both multisets. Otherwise, we use the second operation, if the number is greater than 1. If it is equal to 1, then it is impossible to equalize the multisets a and b.

 */

void pgsolve()
{
    int n;
    cin >> n;
    multiset<int> a, b;

    rep(i, n)
    {
        int x;
        cin >> x;
        while (x % 2 == 0)
        {
            x /= 2;
        }
        a.insert(x);
    }

    rep(i, n)
    {
        int x;
        cin >> x;
        b.insert(x);
    }
    n = sz(a);

    while (!b.empty())
    {
        int x = *b.rbegin();
        // cout << x << endl;
        if (!a.count(x))
        {
            if (x == 1)
                break;
            b.erase(b.find(x));
            b.insert(x / 2);
        }
        else
        {
            b.erase(b.find(x));
            a.erase(a.find(x));
        }
    }

    cout << (b.empty() ? "YES" : "NO") << endl;
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