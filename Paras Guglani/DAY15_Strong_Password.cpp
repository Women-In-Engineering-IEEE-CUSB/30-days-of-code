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
    int i, j, n, m;
    cin >> n;
    string pass;
    cin >> pass;
    //  if(n<6)
    //    { cout<< 6-n<<endl;
    //     return;}
    int dig=0,lower=0,upper=0,spcl=0;
    rep(i,n)
    {
        if(isdigit(pass[i]))
            dig++;
        else if(isupper(pass[i]))
            upper++;
        else if(islower(pass[i]))
            lower++;
        else 
            spcl++;
    }
    int count=0;
    if(dig==0)
        count++;
    if(upper==0)
        count++;
    if(lower==0)
        count++;
    if(spcl==0)
        count++;

        if ((n+count)>6)
        {
                cout<<count<<endl;
                // cout<<"in if"<<endl;

        }
        else
        {

            int left = 6-(n+count);
            cout<<left+count<<endl;
        }



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

  
        pgsolve();
    
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__ 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}