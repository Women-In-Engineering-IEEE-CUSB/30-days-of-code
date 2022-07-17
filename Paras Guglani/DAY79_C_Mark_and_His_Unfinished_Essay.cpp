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
#define vai vector<array<int, 4>>
/* This is an implementation problem. What you need to do is after the i-th copying operation, we need to keep track of the beginning point ai and the ending point bi of the appended string. Moreover, we also keep track the subtraction distance ti=ai−li so that for k∈[ai,bi], the k-th letter is the same as the (k−ti)-th letter. Thus, we have recursed the position to the smaller position k−ti, so we keep doing that until we reach the initial string.

Therefore, to solve this problem, we iterate from i=c,c−1,…,1. If k is in [ai,bi], subtract k by ti. After all operations, k should be at the inital string, and we output the k-th letter.

The time complexity of this solution is O(cq). However, less efficient solutions of O((clogc)q) (using binary search each time) or O(c2q) (by going through all intervals in each iteration) pass as well.

 */
char getChar(vai &vec, string &str, int k)
{
    int n = str.size();
    if (k < 0)
    {
        return '+';
    }

    else if (k < n)
    {
        char a = str[k];
        return a;
    }
    else
    {
        n=vec.size();
        rep(i, n)
        {
            if (vec[i][0] <= k && vec[i][1] >= k)
            {
                char a = getChar(vec, str, vec[i][2] + k - vec[i][0]);
                return a;
            }
        }
    }
    return '+';
}

/* void solve()
{
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;

    vector<ll> left(c + 1), right(c + 1), diff(c + 1);
    left[0] = 0;
    right[0] = n;

    for (int i = 1; i <= c; ++i)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        left[i] = right[i - 1];
        right[i] = left[i] + (r - l + 1);
        diff[i] = left[i] - l;
    }

    while (q--)
    {
        ll k;
        cin >> k;
        k--;
        for (int i = c; i >= 1; --i)
        {
            if (k < left[i])
                continue;
            else
                k -= diff[i];
        }
        cout << s[k] << "\n";
    }
}
 */
void pgsolve()
{
    int n, c, q;
    cin >> n >> c >> q;
    string str;
    cin >> str;
    vai vec;
    int location = n;
    rep(i, c)
    {
        int l, r;
        cin >> l >> r;
        r = r - 1;
        l = l - 1;
        vec.pb({location, location + r - l, l, r});
        location = location + r - l + 1;
    }
    rep(i, q)

    {
        int k;
        cin >> k;
        char ans = getChar(vec, str, k - 1);
        cout << ans << endl;
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
