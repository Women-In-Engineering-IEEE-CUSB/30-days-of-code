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
    int n, x;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
    }
    if ((n - a.size()) % 2 == 0)
    {
        cout << a.size() << endl;
    }
    else
    {
        cout << a.size() - 1 << endl;
    }

    // vi v;
    // set<int> s;
    // map<int, int> mp;
    // int n;
    // cin >> n;
    // int a = n;

    // rep(i,n)
    // {
    //     int ele;
    //     cin >> ele;
    //     v.pb(ele);
    //     s.insert(ele);
    //     mp[ele] += 1;
    // }
    // v.assign(s.begin(), s.end());
    // int size=v.size();
    // for (int i = 0; i < size; i++)
    // {
    //     n -= (mp[v[i]] - 1);
    // }
    // if ((a - n) % 2 == 1)
    //     n -= 1;
    // cout << n<<endl;
    /*  int arr[n];
     rep(i, n)
     {
         cin >> arr[i];
     }
     sort(arr, arr + n);
     int odd_ele = 0;
     int total_same = 0;
     int pairs = 0;
     int remove = 0;
     rep(i, n - 1)
     {
         int count = 1;
         if (arr[i] == arr[i + 1])
         {

             int j = i;
             while (arr[i] == arr[j + 1])
             {
                 i++;
                 j++;
                 count++;
                 total_same++;
             }
             if (count % 2 == 1)
             {
                 remove = count - 1;
             }
             if (count % 2 == 0)
             {
                 remove = count - 2;
                 odd_ele++;
             }
         }
     }
     if (odd_ele % 2 == 0)
     {
         remove += odd_ele;
     }
     else
     {
         remove += odd_ele + 1;
     }
     cout << n - remove << endl; */
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