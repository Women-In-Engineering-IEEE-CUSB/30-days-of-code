
/*
                PROBLEM STATEMENT
Ayush loves the characters ‘a’, ‘s’, and ‘p’.
He got a string of lowercase letters and he wants to find out how many times characters ‘a’, ‘s’, and ‘p’
occurs in the string respectively. Help him find it out.
*/
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
   int n;
    cin >> n;
    string str;
    cin >> str;
    // does three traversals
    // cout<<count(all(str),'a')<<" "<<count(all(str),'s')<<" "<<count(all(str),'p')<<endl;

    unordered_map<char, int> m1;

    for (int i = 0; i < str.size(); ++i)
    {
        m1[str[i]]++;
    }

    cout << m1['a'] << " " << m1['s'] << " " << m1['p'] << '\n';
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

  
        pgsolve();
  
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}