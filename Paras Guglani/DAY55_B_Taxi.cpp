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
    int n;
    cin >> n;
    int a[n];
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    rep(i, n)
    {
        cin >> a[i];
    }
    int groups = 0;
    // sort(a, a + n, greater<int>());
    int i = 0;
    while (i < n)
    {
        if (a[i] == 4)
            groups++;
        else if (a[i] == 3)
        {
            count3++;
        }
        else if (a[i] == 2)
        {
            count2++;
        }
        else
        {
            count1++;
        }
        i++;
    }
    // cout<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<endl;
    // int full3group=min(count3,count1);
    groups += count3;
    count1 = max(count1 - count3, 0ll);
    groups += count2 / 2;

    if (count2 % 2 != 0)
    { // one 2 is remaining and some count 1 are remaining
        if (count1 <= 2)
        {
            groups++;
        }
        else
        {
            count1 += 2;
            if (count1 % 4 == 0)
            {
                groups += count1 / 4;
            }
            else
            {
                groups += count1 / 4 + 1;
            }
        }
    }
    else
    {
        if (count1 % 4 == 0)
        {
            groups += count1 / 4;
        }
        else
        {
            groups += count1 / 4 + 1;
        }
    }
    // cout << count1 << " " << count2 << " " << count3 << " " << count4 << endl;

    cout << groups << endl;
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

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}