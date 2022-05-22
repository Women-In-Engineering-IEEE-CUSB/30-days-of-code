#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
const int mod = 1e9 + 7;
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
int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    int smallint = power(x, y / 2);
    smallint = (smallint * smallint) % mod;
    if (y % 2)
        smallint = (x * smallint) % mod;
    return smallint;
}


bool is_pal(string s)
{
    int end = s.size() - 1;
    int bgn = 0;

    while (bgn < end)
    {
        if (s[bgn++] != s[end--])
        {
            return false;
        }
    }
    return true;
}
int inv(int x)
{
    return power(x, mod - 2);
}

string get_str(string &s, int idx)
{
    int sz = s.size();
    string res_str = s.substr(0, idx);
    res_str = res_str + s.substr(idx + 1, sz - idx - 1);
    return res_str;
}

void dfs(string curr, int cnt, int &x, int &y)
{

    if (curr == "")
    {

        y++;
        x = x + cnt;
        x++;
        y = y % mod;
        x = x % mod;

        return;
    }

    if (is_pal(curr))
    {
        cnt++;
        cnt = cnt % mod;
    }

    for (int i = 0; i < (int)curr.size(); i++)
    {
        string currn = get_str(curr, i);
        dfs(currn, cnt, x, y);
    }
    return;
}

void pgsolve()
{
    int n;
    string s;
    cin >> n >> s;
    int x = 0;
    int y = 0;
    int len = s.size();
    for (int i = 0; i < (int)s.size(); i++)
    {

        string curr = get_str(s, i);

        dfs(curr, 0, x, y);
    }

    int print = inv(y);
    print = (print * x) % mod;

    cout << print << endl;
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

    int t;
    cin >> t;
    int temp = t;
    while (t--)
    {
        cout << "Case #" << temp - t << ": ";
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__ 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}