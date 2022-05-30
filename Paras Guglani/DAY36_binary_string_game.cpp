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
#define fora(i, x, y) for (ll i = x; i < y; ++i)


#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif
}
const int N = 2005;
int dp[N][2];
bool answer(int val, int par)
{
   if (val <= 0)
      return false;
   if (dp[val][par] != -1)
      return dp[val][par];
   bool ans = false;
   if (val >= 1)
      ans |= (!answer(val - 1, !par));
   if (val >= 2)
      ans |= (!answer(val - 2, !par));
   return dp[val][par] = ans;
}

int32_t main()

{
    paras();
    w(t)
    {
    int n, cnt = 0;
   string str1;
   cin >> n >> str1;
   REP(i, 0, n + 1) dp[i][0] = dp[i][1] = -1;
   REP(i, 0, n - 1) cnt += (str1[i] == str1[i + 1]);
   if (answer(cnt, 0))
      cout << "JJ\n";
   else
      cout << "Uttu\n";

        
    }
    return 0;
}