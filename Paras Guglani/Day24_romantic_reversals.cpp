#include <bits/stdc++.h>
using namespace std;

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
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int l = 0, r = k - 1;
    int idx = 1;

    string ans;

    while (l <= r)
    {
        if (idx % 2)
        {
            ans.pb(s[l++]);
        }
        else
        {
            ans.pb(s[r--]);
        }
        idx ^= 1;
    }

    reverse(ans.begin(), ans.end());

REP(i, k, n - 1)
    
    {
        ans.pb(s[i]);
    }

    cout << ans << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif

    w(t)
    {
        pgsolve();
    }

    return 0;
}