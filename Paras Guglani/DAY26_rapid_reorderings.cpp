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
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
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
void s()
{
    int n; 
    cin>>n;
    vi v,ans;
    int x;
    map<int,int> mp,ch;
    rep(i,2*n)
   
    {
        cin>>x;
        v.pb(x);
        if(mp[x]==0) ans.pb(x);
        mp[x]++;
    }
    sort(ans.begin(),ans.end());
    int k=0;
    ch[ans[0]]++;
    REP(i,1,ans.size()-1)
   
    {
        int temp = ceil((i+1)/2.0);
        ch[ans[temp-1]]++;
    }
    k = ans.size()-1; ch[ans[k]]++;
    REPR(i,k-1,0)
   
    {
        int temp;
        temp = i+ceil((k-i+1)/2.0);
        ch[ans[temp-1]]++;
    }
    
    for (auto i = mp.begin(),j=ch.begin(); i != 
    mp.end(); i++,j++)
    {
        if(*i!=*j)
        {
            cout << "-1\n";
            return;
        }
    }
    rep(i,ans.size())
    {
        cout << ans[i] << ' ';
    }

    cout<<endl;
        
}
int32_t main()

{

    paras();
    w(t)
    { 
        s();

        
    }
    return 0;
}