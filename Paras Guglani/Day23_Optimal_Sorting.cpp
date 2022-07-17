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

    int n;
    cin >> n;
    vi a(n), b(n);
    rep(i, n)
    {
        cin >> a[i], b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int last = n - 1;
    int final = 0;
    while (last > 0)
    {
        if (a[last] != b[last])
        {
            int b_last = b[last], m1 = a[last];
            int i = last;
            while (i > 0)
            {
                if (a[i] != b[last])
                    i--;
                else
                    break;
                m1 = min(a[i], m1);
            }
            int pos = lower_bound(b.begin(), b.end(), m1) - b.begin();
            REP(j, pos, i-1)
            m1 = min(m1, a[j]);
            while (b[pos] != m1)
            {
                pos = lower_bound(b.begin(), b.end(), m1) - b.begin();

                REP(j, pos, i-1)
                m1 = min(m1, a[j]);
            }
            final = final + (b_last - m1);
            last = pos - 1;
        }
        else
            last -= 1;
    }
    cout << final << "\n";
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