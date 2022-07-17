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
#define vii vector<pii>
#define umi unordered_map<int, int>
void pgsolve()
{
    int n;
    cin >> n;
    umi map;
    int arr[n];
    rep(i, n)
    {
        cin >> arr[i];
        map[arr[i]]++;
    }
    int barr[n];
    rep(i, n)
    {
        cin >> barr[i];
        map[arr[i]]++;
    }
    vii v;
    rep(i, n)
    {
        v.pb({arr[i], barr[i]});
    }
    sort(all(v));

    vii res;
    rep(i, n)
    {

        if (arr[i] == v[i].ff && barr[i] == v[i].ss)
        {
        }
        else
        {
            REP(j, i + 1, n)

            {
                if (arr[j] == v[i].ff && barr[j] == v[i].ss)
                {
                    swap(arr[i], arr[j]);
                    swap(barr[i], barr[j]);
                    res.pb({i + 1, j + 1});
                }
            }
        }
    }
    bool ans = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i].ff >= v[i - 1].ff && v[i].ss >= v[i - 1].ss)
        {
        }
        else
            ans = false;
    }
    if (ans)
    {
        cout << res.size() << "\n";
        for (auto it : res)
            cout << it.ff << " " << it.ss << "\n";
    }
    else
        cout << "-1\n";
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