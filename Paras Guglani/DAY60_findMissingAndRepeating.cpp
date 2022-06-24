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
int *findTwoElement(int *arr, int n)
{
    int temp[n + 1] = {0};
    int *res = new int[2];
    for (int i = 0; i < n; i++)
    {
        if (temp[arr[i]] == 0)
        {
            temp[arr[i]] = 1;
        }
        else
        {
            res[0] = arr[i];
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (temp[i] == 0)
        {
            res[1] = i;
            break;
        }
    }
    return res;
}
void pgsolve()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, n)
    {
        cin >> arr[i];
    }
    int *res = findTwoElement(arr, n);
    cout << res[0] << " " << res[1] << endl;
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