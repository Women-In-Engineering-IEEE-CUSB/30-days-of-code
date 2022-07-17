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
/*
1
5
abab
ab
abc
abacb
c
 */
void pgsolve()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<string> v;
    string curr, running;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        mp[str] = 1;
        v.pb(str);
        // cout<<"taken "<<str<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        curr = "";
        for (int j = 0; j < v[i].size(); j++)
        {
            curr += v[i][j];
            /*
            if (mp[v[i].substr(0, j)] == 1 && mp[v[i].substr(j, v[i].size())] == 1)
                {
                flag = true;
                break;
               } */

            if (mp[curr] == 1)
            {
                running = "";
                for (int k = j + 1; k < v[i].size(); k++)
                {
                    running += v[i][k];
                }
                if (mp[running] == 1)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;
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