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

/* If A = BA=B, the answer is YES
If AA is 000...00000...00 (i.e AA does not have a 11), then we can only the third type of operation, which does not change anything. Therefore, the answer is NO if A \neq BA

​
 =B.
Now, assume A \neq BA

​
 =B and AA has a 11.

Claim: It is possible to convert AA to BB if any only if BB has two consecutive characters that are equal

 */
void pgsolve()
{
    ll n;
    cin >> n;
    string A, B;
    cin >> A >> B;
    int exist = A.find('1');
    if (n == 2 && A == "00" && B == "11")
    {
        cout << "NO" << endl;
        return;
    }

    bool flag = false;
    REP(i, 1, n)
    {
        if (B[i] == B[i - 1])
        {
            flag = true;
            break;
        }
    }
    if (flag != 0)
    {
        if (A == B)
        {
            cout << "YES" << endl;
            return;
        }
        if (exist == string::npos)
        {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        return;
    }
    if (flag == 0 && A == B)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;

/*     string a, b;
    cin >> a >> b;
    int oc = (a[n - 1] == '1'), co = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        oc += (a[i] == '1');
        co += (b[i] == b[i + 1]);
    }
    if ((oc > 0 && co > 0) || (a == b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl; */

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
