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
    string str;
    cin >> str;
    int p;
    cin >> p;
    int n = str.length();
    int sum = 0;
    bool isempty = true;
    // sum of all alphabets in the string
    rep(i, n)
    {

        sum += str[i] - 'a' + 1;
    }
    if (sum <= p)
    {
        cout << str;
    }
    else
    {
        // store the count of each alphabet in the string
        vi count(26, 0);
        rep(i, n)
        {
            count[str[i] - 'a']++;
        }

        // print all counts
        // rep(i, 26)
        // {
        //     cout << count[i] << " ";
        // }
        // remove count of each alphabet from the sum starting from the 26th alphabet
        for (int i = 25; i >= 0; i--)
        {
            while (sum > p && count[i])
            {
                sum -= i + 1;
                count[i]--;
            }
        }
        for (int i = 0; i < n; i++) 
        {
            if (count[str[i] - 'a'])
            {
                isempty = false;
                cout << str[i];
                count[str[i] - 'a']--;
            }
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