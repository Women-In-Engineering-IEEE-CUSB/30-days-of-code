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
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
int caseno = 1;
void pgsolve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int first_sum = 0;
    int total_sum = (n * (n + 1) / 2);
    x = x + y;
    if (total_sum % x == 0)
    {
        cout<< "POSSIBLE" << endl;
        x = total_sum / x;
        y = y * x;
        total_sum = n;
        vi vc(total_sum + 3);
      
        REP(i,1,total_sum)
        {
            if (i >= 1)
            {
                vc[i - 1] = i;
            }
        }

      
        REPR(i,total_sum-1,0)
        {
            if (vc[i] <= y)

                y = y - vc[i],
                vc[i] = 0;
        }

        for (auto it : vc)
        {
            if (it != 0)
                ++first_sum;
        }

        cout << first_sum << endl;
        rep(i, total_sum)
        {
            if (vc[i] > 0 || vc[i] < 0)
            {

                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }

    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    // cout << "Case #" << caseno << ": " << sub(str, n) << endl;
    caseno++;
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
    int t;
    cin >> t;
    int temp = t;
    while (t--)
    {
        cout << "Case #" << temp - t << ": ";
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}