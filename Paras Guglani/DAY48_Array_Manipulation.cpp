#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
//better solution https://www.hackerrank.com/challenges/crush/editorial

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
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int  n, q,ans=0,x=0;
    cin >> n >> q;
    vi a(n);
    // could have used array in heap 
    // int *a=new int[n+1];
    REP(i, 0, n)
    {
      a[i] = 0;
    }
    rep(i,q)
    {
        int l, r,add;
        cin >> l >> r >> add;
       
            a[l] += add;
        if((r+1)<=n)
         a[r+1] -=add;

    }

    REP(i,1,n)
    {
        x=x+a[i];
        if(x>ans)
        {
            ans = x;
        }
    }
    cout << ans << endl;
    
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
    freopen("error.txt", "w", stderr);
#endif

   
        pgsolve();
    
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}

