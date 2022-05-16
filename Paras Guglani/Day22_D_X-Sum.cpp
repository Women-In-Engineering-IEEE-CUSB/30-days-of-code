#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountint(x)
#define zrobits(x) __builtin_ctzint(x)
#define mod 1000000007
#define inf 1e18
#define PI 3.1415926535897932384626
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define aint(x) (x).begin(), (x).end()
#define sortaint(x) sort(aint(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int i, j, n, m;

    cin >> n >> m;
    int board[n][m];
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> board[i][j];
        }
    }

    int ele, pos_x, pos_y, max_sum = -1;
    rep(i, n)


        rep(j, m)
    {
        ele = board[i][j];
        pos_x = i;
        pos_y = j;

        while ((pos_x > 0) && (pos_y > 0))
        {
            pos_x--;
            pos_y--;
            ele += board[pos_x][pos_y];
        }
        pos_x = i;
        pos_y = j;

        while ((pos_x < n - 1) && (pos_y > 0))
        {
            pos_x++;
            pos_y--;
            ele += board[pos_x][pos_y];
        }
        pos_x = i;
        pos_y = j;

        while ((pos_x > 0) && (pos_y < m - 1))
        {
            pos_x--;
            pos_y++;
            ele += board[pos_x][pos_y];
        }
        pos_x = i;
        pos_y = j;

        while ((pos_x < n - 1) && (pos_y < m - 1))
        {
            pos_x++;
            pos_y++;
            ele += board[pos_x][pos_y];
        }
        if (ele > max_sum)
        {
            max_sum = ele;
        }
    }
    cout << max_sum << endl;
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