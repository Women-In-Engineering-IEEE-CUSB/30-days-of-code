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
Note that Victor looks at the clock forever, but there are only at most 1440 different times the clock can show (because there are 1440 different minutes in a day). So we only have to check the first 1440 times Victor sees, and count the palindromes (you can check a few more just to be safe, but they will repeat anyways).

Now we just have to implementing adding x minutes to a clock. There are several ways to do this. One of the slower ways might be writing functions converting a number of minutes into a time for a clock, or you can just compute all palindrome times in terms of minutes and that way you don't have to convert from clock time to number of minutes.

The complexity is O(1) per test case, since you only have to check a constant number of times.

 */

int a[5] = {600, 60, 0, 10, 1};
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

void pgsolve()
{
    string s;
    cin >> s;
    int x;
    cin >> x;
    int tot = 0;
    for (int i = 0; i < 5; i++)
    {
        tot += (int)(s[i] - '0') * a[i];
    }
    set<int> t;
    for (int i = 0; i < 2022; i++)
    {
        t.insert(tot);
        tot += x;
        tot %= 1440;
    }
    int res = 0;
    for (int i : t)
    {
        for (int j = 0; j < 16; j++)
        {
            if (good[j] == i)
            {
                res++;
            }
        }
    }
    cout << res << '\n';
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