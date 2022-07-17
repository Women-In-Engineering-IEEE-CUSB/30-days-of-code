#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

/* Let p[x] be the position of x in permutation a.

Since MEX([ap[0]])=1, the only possible position of 0 in permutation b is exactly p[0].

Without loss of generality, we will assume that p[0]<p[1]. For every interval [l,r] (l≤p[0]<p[1]≤r), MEX([bl,…,br]) must be at least 2. For every other interval, MEX([bl,…,br]) cannot exceed 2. The only position for 1 which satisfies both of these constraints is exactly p[1].

Let's consider the current interval [l,r] as being [p[0],p[1]].

If p[2]∈[l,r], we can say that, for every interval [x,y] (x≤l<r≤y), MEX([bl,…,br]) must be at least 3. Similarly, for every other interval, MEX([bl,…,br]) cannot exceed 3. Both of these constraints are only met if 2 occurs in permutation b on some position p∈[l,r]. Since only 2 positions are currently occupied in [l,r], the total number of similar permutations will be multiplied by (r−l+1)−2.

Otherwise, 2 can be placed in permutation b only on p[2]. Additionally, the current interval will be "extended" to include p[2], resuting in either [p[2],r] or [l,p[2]].

After processing 0,1,…,k−2 and k−1, the algorithm for processing k is very similar to the one presented earlier. If p[k]∈[l,r], the answer gets multiplied by (r−l+1)−k. Otherwise, the current interval is extended to include p[k].

Time complexity per testcase: O(n) */
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
const ll NMAX = 1e5 + 5;

ll v[NMAX], pos[NMAX];

void pgsolve()
{
    ll n, l, r, ans = 1;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        pos[v[i]] = i;
    }

    l = r = pos[0];
    for (ll i = 1; i < n; i++)
    {
        if (pos[i] < l)
            l = pos[i];

        else if (pos[i] > r)
            r = pos[i];
        else
            ans = ans * (r - l + 1 - i) % mod;
    }
    cout << ans << '\n';
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