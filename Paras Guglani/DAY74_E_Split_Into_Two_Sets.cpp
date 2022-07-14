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
map<int, vector<int>> m;
vector<bool> used;

int go(int v)
{
    used[v] = true;
    for (auto now : m[v])
    {
        if (!used[now])
        {
            return go(now) + 1;
        }
    }
    return 1;
}

void pgsolve()
{
    int n, x, y;
    cin >> n;

    m.clear();
    used.clear();
    used.resize(n + 1, false);

    bool fault = false;
    rep(i, n)
    {
        cin >> x >> y;
        m[x].push_back(y);
        m[y].push_back(x);
        if (x == y || m[x].size() > 2 || m[y].size() > 2)
            fault = true;
    }

    if (fault)
    {
        cout << "NO\n";
        return;
    }

    rep(i, n)
    {
        if (!used[i + 1])
        {
            if (go(i + 1) % 2)
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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