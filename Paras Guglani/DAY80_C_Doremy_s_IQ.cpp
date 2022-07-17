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
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb push_back
#define mp make_pair
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
#define miv map<int, vector<int>>

/* Solution 1

We call contests that will decrease Doremy's IQ bad contests and the other good contests.

In the best solution(testing the maximum number of contests), there is always an index x.

Contest i (i<x) is tested, if Contest i is good;
Contest i (i≥x) is tested, no matter what kind of contest it is.
How to prove that this conclusion? For any choice, we can find the last contest a that is not tested and the first bad contest b that is tested. If b<a, we can give up contest b and choose to test contest a, and the number of contests that is tested does not change. If b>a, there is already an valid x.

When x is smallest, you can get the best solution. And we can find the smallest x by binary search.

Time complexity O(nlogn).

Solution 2

Consider everything in the reverse order.

Assume that Doremy has Q=0 IQ in the end. Consider whether a contest should be tested in the reverse order.

ai≤Q. Doremy should tested the contest because there is no decrease in her IQ.
ai>Q and Q<q. If Doremy tests the contest, her IQ will decrease by 1, so in the reverse order, her IQ increases by 1; otherwise she just skipped the contest and nothing happened. Doremy can test at most q contest with the ai>Q property. But if Doremy gets more IQ, she can participate more previous good contests. So she should test this contest.
If ai>Q and Q=q, Doremy cannot test the contest because her IQ is not enough.
So you can determine whether every contest should be tested.

Time complexity O(n).

 */

const int MX = 5e5 + 23;
const ll MOD = 998244353;
int n, a[MX], q, choose[MX];
bool check(int mid)
{
    for (int i = 1; i <= n; ++i)
        choose[i] = 0;
    int iq = q;
    for (int i = 1; i < mid; ++i)
        if (a[i] <= iq)
            choose[i] = 1;
    for (int i = mid; i <= n; ++i)
    {
        choose[i] = 1;
        if (iq == 0)
            return 0;
        if (a[i] > iq)
            --iq;
    }
    if (iq < 0)
        return 0;
    return 1;
}

void solve()
{
   cin>>n>>q;
    for (int i = 1; i <= n; ++i)
        cin>>a[i];
    int l = 1, r = n, mid;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (check(mid))
            r = mid - 1;
        else
            l = mid + 1;
    }
    // [r + 1 ,n] is selected
    check(r + 1);
    for (int i = 1; i <= n; ++i)
        printf("%d", choose[i]);
    puts("");
}





void pgsolve()
{
    int n, q;
    cin >> n >> q;
    vi vec(n + 1);
    REP(i, 1, n + 1)
    {
        cin >> vec[i];
    }
    vi res(n + 1);
    int curq = 0;
    REPR(i, n, 1)
    {
        if (curq < vec[i])
        {
            if (curq < q)
            {
                curq++;
                res[i] = 1;
            }
            else
            {
                res[i] = 0;
            }
        }
        else
        {
            res[i] = 1;
        }
    }

    //solution 2
   /*  int a[100005], b[100005];

    int n, iq;
    scanf("%d%d", &n, &iq);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    int sum = 0, nq = 0;
    for (int i = n; i >= 1; --i)
    {
        if (a[i] <= nq)
            b[i] = 1;
        else if (nq < iq)
            ++nq, b[i] = 1;
        else
            b[i] = 0;
    } */

    REP(i, 1, n + 1)
    {
        cout << res[i];
    }
    cout << endl;
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
