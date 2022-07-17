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
   int n,x,count0=0,count1=0;
   int n, k;
   cin >> n >> k;
   string s;
   cin >> s;
   int ones = 0, p1_first = n, p1_last = -1;
   for (int p = 0; p < n; p++)
   {
       if (s[p] != '1')
           continue;
       ones += 1;
       if (p1_first == n)
           p1_first = p;
       p1_last = p;
   }
   int add = 0;
   // moving the last one to last position
   if (ones > 0 and (n - 1 - p1_last) <= k)
   {
       k -= (n - 1 - p1_last);
       add += 1;
       ones -= 1;
   }
   // moving the first one to first position
   if (ones > 0 and p1_first <= k)
   {
       k -= (p1_first);
       add += 10;
       ones -= 1;
   }
   cout << 11 * ones + add << "\n";

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