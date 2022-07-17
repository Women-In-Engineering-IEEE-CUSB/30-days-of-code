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
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string evenstr, oddstr;
    rep(i, n)
    {
        if (i % 2 == 0)
            evenstr.pb(str[i]);
        else
            oddstr.pb(str[i]);
    }
    sortall(evenstr);
    sortall(oddstr);
    if(evenstr.size()!= oddstr.size())
        cout<<"NO"<<endl;
    else
    {
        rep(i, evenstr.size())
        {
            if (oddstr[i] != evenstr[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }

  /*   //second method
    int f[26][2];
    for (int i = 0; i < 26; i++)
        f[i][0] = f[i][1] = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        f[(s[i] - 'a')][i % 2]++;
    }
    bool poss = true;
    for (int i = 0; i < 26; i++)
        poss = poss && (f[i][0] == f[i][1]);
    if (poss)
        cout << "YES\n";
    else
        cout << "NO\n"; */
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
