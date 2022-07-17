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
#define vpi vector<pair<int, int>>
#define spi set<pair<int, int>>
// easy approach
bool doesAttack(int x3, int y3, int x4, int y4)
{
    if ((abs(x3 - x4) == 1) && (abs(y3 - y4) == 2))
        return true;
    if ((abs(x3 - x4) == 2) && (abs(y3 - y4) == 1))
        return true;
    return false;
}
void pgsolve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    bool ok = false;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if ((i == x1 && j == y1) || (i == x2 && j == y2))
                continue;
            if (doesAttack(x1, y1, i, j) && doesAttack(x2, y2, i, j))
            {
                ok = true;
                break;
            }
        }
        if (ok)
            break;
    }
    (ok) ? cout << "YES\n" : cout << "NO\n";

    /*
        vpi possible;
        if (x1 - 2 >= 1)
        {
            if (y1 - 1 >= 1)
            {
                possible.pb({x1 - 2, y1 - 1});
            }
            if (y1 + 1 <= 8)
            {
                possible.pb({x1 - 2, y1 + 1});
            }
        }
        if (x1 + 2 <= 8)
        {
            if (y1 - 1 >= 1)
            {
                possible.pb({x1 + 2, y1 - 1});
            }
            if (y1 + 1 <= 8)
            {
                possible.pb({x1 + 2, y1 + 1});
            }
        }
        if (y1 - 2 >= 1)
        {
            if (x1 - 1 >= 1)
            {
                possible.pb({x1 - 1, y1 - 2});
            }
            if (x1 + 1 <= 8)
            {
                possible.pb({x1 + 1, y1 - 2});
            }
        }
        if (y1 + 2 <= 8)
        {
            if (x1 - 1 >= 1)
            {
                possible.pb({x1 - 1, y1 + 2});
            }
            if (x1 + 1 <= 8)
            {
                possible.pb({x1 + 1, y1 + 2});
            }
        }
        if (x2 - 2 >= 1)
        {
            if (y2 - 1 >= 1)
            {
                possible.pb({x2 - 2, y2 - 1});
            }
            if (y2 + 1 <= 8)
            {
                possible.pb({x2 - 2, y2 + 1});
            }
        }
        if (x2 + 2 <= 8)
        {
            if (y2 - 1 >= 1)
            {
                possible.pb({x2 + 2, y2 - 1});
            }
            if (y2 + 1 <= 8)
            {
                possible.pb({x2 + 2, y2 + 1});
            }
        }
        if (y2 - 2 >= 1)
        {
            if (x2 - 1 >= 1)
            {
                possible.pb({x2 - 1, y2 - 2});
            }
            if (x2 + 1 <= 8)
            {
                possible.pb({x2 + 1, y2 - 2});
            }
        }
        if (y2 + 2 <= 8)
        {
            if (x2 - 1 >= 1)
            {
                possible.pb({x2 - 1, y2 + 2});
            }
            if (x2 + 1 <= 8)
            {
                possible.pb({x2 + 1, y2 + 2});
            }
        }

        spi setc;
        bool isequal = false;
        for (auto const &a : possible)
        {
            if (setc.find(a) != setc.end())
            {
                isequal = true;
                cout << "YES" << '\n';
                return;
                break;
            }
            setc.insert(a);
        }

        if (!isequal)
        {
            cout << "NO" << '\n';
            return;
        }
     */
}
int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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