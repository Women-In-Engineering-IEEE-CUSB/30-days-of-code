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
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n;
    cin >> n;
    int zero = 0;
    vi vec;
    rep(i, n)
    {
        int ele;
        cin >> ele;
        if (!ele)
        {
            zero++;
        }
        else
        {
            vec.pb(ele);
        }
    }
    sortall(vec);
    rep(i, zero)
    {
        vec.pb(0);
    }
    int ans = 0;
    int parent = 1;
    rep(i, n)
    {
        bool isTruth = 1;
        rep(j, vec[i])
        {
            if (parent < n)
            {
                parent++;
            }
            else
            {
                isTruth = 0;
                break;
            }
        }
        ans = ans + isTruth;
    }
    cout << ans << "\n";

    /*
    //https://www.codechef.com/submit/LARGEFAM?tab=solution     //second method
        int a[n];
        priority_queue<int> pq;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(a[i]);
            sum += a[i];
        }
        int ans = n;
        while (sum >= n)
        {
            ans--;
            sum -= pq.top();
            pq.pop();
        }
        cout << ans << endl;
     */
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
