#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 998244353LL
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
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif
}

int32_t main()

{
    paras();
    w(t)
    {
        int n;
        cin >> n;
        int p = 1, q;
        if (n % 2 == 0)

            if (n % 4 == 0)
            {

                q = 1;

                p = n / 4;
                p %= mod;

                p = p * (n + 1);
                p %= mod;

                p = p * (n + 1);
                p %= mod;
            }

            else
            {
                q = 2;
                p = n / 2;
                p %= mod;

                p = p * (n + 1);
                p %= mod;

                p = p * (n + 1);
                p %= mod;
            }
        else
        {
            q = 1;

            p = p * (n + 1) / 2;
            p %= mod;

            p = p * (n + 1) / 2;
            p %= mod;

            p = p * n;
            p %= mod;
        }

        int inv = 0;

        if (q == 1)
        {
            inv = 1;
        }
        else if (q == 2)
        {
            inv = 499122177;
        }

        int ans;
        ans = p * inv;
        ans %= mod;
        cout << ans << endl;
    }
    return 0;
}