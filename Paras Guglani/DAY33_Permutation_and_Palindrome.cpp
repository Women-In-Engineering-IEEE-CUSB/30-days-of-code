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

char getChar(int i)
{
    return (char)i + 97;
}
void pgsolve()
{
    string str;
    cin >> str;
    map<char, vector<int>> indexes_map;
    int n = str.length();
    rep(i, n)
    {
        indexes_map[str[i]].pb(i);
    }
    int odd_freq_count = 0;
    rep(i, 26)
    {
        if (indexes_map[getChar(i)].size() % 2 == 1)
        {
            odd_freq_count++;
        }
    }
    if (odd_freq_count > 1)
    {
        cout << -1 << endl;
        return;
    }
    int ans[str.length()];
    int start = 0;
    int end = str.length() - 1;
    rep(i, 26)
    {
        char current_char = getChar(i);
        for (int j = 0; j < indexes_map[current_char].size(); j += 2)
        {
            if(indexes_map[current_char].size()-j==1)
            {
                ans[str.length()/2]=indexes_map[current_char][j];
                continue;
            }

            ans[start] = indexes_map[current_char][j];
            start++;
            ans[end] = indexes_map[current_char][j + 1];
            end--;
        }
    }
    rep(i, str.length())
    {
        cout << ans[i] + 1 << " ";
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