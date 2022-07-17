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
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void a()
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
    a();
    w(t)
    {

        int r, g, b, p = 0, q = 0;
        string s = "";
        cin >> r >> g >> b;
        if (b <= 1)
        {
            REP(i, 0, r)
                cout << "R";
            REP(i, 0, g)
                cout << "G";
            REP(i, 0, b)
                cout << "B";
            cout << endl;
            REP(i, 0, r + g + b - 1)
                cout << i + 1 << " " << i + 2 << endl;
        }
        else
        {
            s += "BRGB";
            b -= 2;
            r--;
            g--;
            while (b && g)
            {
                s += "BG";
                b--;
                g--;
                p++;
            }
            while (b && r)
            {
                s += "BR";
                b--;
                r--;
                q++;
            }
            if (b)
            {
                cout << "-1\n";
                goto next;
            }
            REP(i, 0, r)
            s += "R";
            REP(i, 0, g)
            s += "G";
            cout << s << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << 3 << endl;
            cout << 3 << " " << 4 << endl;
            int coooo = 5;
            REP(i, 0, p)
            {
                cout << coooo << " " << coooo + 1 << endl;
                cout << 2 << " " << coooo + 1 << endl;
                coooo += 2;
            }
            REP(i, 0, q)
            {
                cout << coooo << " " << coooo + 1 << endl;
                cout << 3 << " " << coooo + 1 << endl;
                coooo += 2;
            }
            REP(i, 0, r + g)
            {
                cout << 1 << " " << coooo << endl;
                coooo++;
            }
        }
            next:
            ;
    }
    return 0;
}