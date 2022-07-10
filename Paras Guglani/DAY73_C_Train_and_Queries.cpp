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
void pgsolve()
{
    int stations, queries;
    cin >> stations >> queries;
    vi stations_list;
    rep(i, stations)
    {
        int x;
        cin >> x;
        stations_list.pb(x);
    }

    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < stations; i++)
    {
        mp[stations_list[i]].pb(i);
    }
    int ans = 0;
    rep(i, queries)
    {
        int station1, station2;
        cin >> station1 >> station2;
        if (mp.count(station1) > 0 && mp.count(station2) > 0)
        {
            int s1 = mp[station1][0];
            int size = mp[station2].size();
            int s2 = mp[station2][size - 1];
            // cout<<"s1 "<<s1<<" s2 "<<s2<<endl;
        
            if (s1 < s2)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
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