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
    /*    Note that ⌈log2104⌉=14, which is less than the number of queries. If we can answer a question of the form "given a subarray, does it contain the fixed point?", then we can binary search on this subarray until we find the fixed point.

   Given a subarray [al,…,ar], let's count the number of ai such that l≤ai≤r. We claim that if this count is odd, then the subarray contains the fixed point; otherwise, it does not.

   First, let's show that each swapped pair either increases the count by 0 or by 2. Suppose that x↔y are swapped (that is, ax=y and ay=x). If ax is in the range from l to r, then l≤y≤r (since ax=y), so ay is also in the range from l to r. Similarly, if ax is not in the range, then neither is ay. So this pair either increases the count by 0 or 2.

   Contrarily, the fixed point increases the count by 0 if it is not in the range and 1 if it is. So we can simply look at the parity of the number of elements satisfying the condition, and run our binary search.

   The time complexity is O(nlogn).
    */

    int n;
    cin >> n;
    assert(n != -1);
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        cout << '?' << ' ' << l << ' ' << mid << endl;
        int x, cnt = 0;
        for (int i = 0; i < mid - l + 1; i++)
        {
            cin >> x;
            assert(x != -1);
            if (l <= x && x <= mid)
            {
                cnt++;
            }
        }
        if (cnt % 2 == 0)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << '!' << ' ' << l << endl;
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