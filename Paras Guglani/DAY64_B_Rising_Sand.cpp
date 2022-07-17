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
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    if (k == 1)
    {
        cout << (n - 1) / 2 << endl;
        return;
    }
    int count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > (a[i - 1] + a[i + 1]))
        {
            count++;
        }
    }
    cout << count << endl;

    /*  Note that two piles in a row can't be too tall, since a pile that is too tall has strictly more sand than its neighbours.

 If k=1 then we can make every other pile too tall, excluding the ends of the array. For example, if a=[1,2,3,4,5,6], we can make piles 2 and 4 too tall by performing some large number of operations on them (say, by making it into [1,10100,3,10100,5,6].) The answer is ⌊n−12⌋.

 If k≥2, then note that for any pile, if we perform the operation on it then we perform on one of its neighbours as well. Therefore, if the pile is not too tall initially, then it will never become too tall as a result of these operations, since both a pile and at least one of its neighbours will gain sand. So in this case, doing operations never improves the answer, and so the answer is the number of too tall piles initially.

 The time complexity is O(n) */
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