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
/*
Let's consider some array which is 3SUM-closed.

If the array has at least three positive elements, consider the largest three x, y, and z. Notice that x+y+z is strictly larger than x, y, and z, which means that x+y+z is not an element of the array (since x, y, z were the largest elements). Therefore the array has ≤2 positive elements.

Similarly, if the array has at least three negative elements, consider the smallest three x, y, and z. Notice that x+y+z is strictly smaller than x, y, and z, which means that x+y+z is not an element of the array (since x, y, z were the smallest elements). Therefore the array has ≤2 negative elements.

Finally, note that there is no point in having more than 2 zeroes in the array, since any additional zeroes won't change the sums that can be formed. So if there are more than 2 zeroes, we can remove them until there are exactly 2.

It follows that the resulting array has at most 2+2+2=6 elements. This is small, so we can brute force the condition in the problem in O(64) or O(63) time.

The time complexity is O(n+64) or O(n+63), depending on the implementation.

 */
void pgsolve()
{
    int n;
    cin >> n;
    vector<int> pos, neg, a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            pos.push_back(x);
        }
        else if (x < 0)
        {
            neg.push_back(x);
        }
        else
        {
            if (a.size() < 2)
            {
                a.push_back(x);
            }
        }
    }
    if (pos.size() > 2 || neg.size() > 2)
    {
        cout << "NO\n";
        return;
    }

    for (int i : pos)
    {
        a.push_back(i);
    }
    for (int i : neg)
    {
        a.push_back(i);
    }

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {
                bool ok = false;
                for (int l = 0; l < a.size(); l++)
                {
                    if (a[i] + a[j] + a[k] == a[l])
                    {
                        ok = true;
                    }
                }
                if (!ok)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
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