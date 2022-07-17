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
string uniqueChar(string str)
{
    string answer;
    unordered_set<char> charSet;

    for (char ch : str)
    {
        if (charSet.find(ch) == charSet.end())
        {
            answer.push_back(ch);
            charSet.insert(ch);
        }
    }

    return answer;
}
void pgsolve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    string str1=uniqueChar(str);
    int unique=str1.length();
    cout<<unique+n<<endl;

    //2nd method
    // bool vis[26] = {};
    // int res = 0;
    // for (char c : str)
    // {
    //     if (!vis[c - 'A'])
    //     {
    //         res += 2;
    //         vis[c - 'A'] = true;
    //     }
    //     else
    //     {
    //         res++;
    //     }
    // }
    // cout << res << '\n';
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