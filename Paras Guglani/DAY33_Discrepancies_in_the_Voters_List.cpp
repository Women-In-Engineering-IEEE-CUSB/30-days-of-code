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
//2nd method to check twice repeated number
vector<int> getVoters(int arr[], int n)
{
    sort(arr, arr + n);
    vector<int> voters;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int j = i; //* form where to check repeat numbers
        while (j < n && (arr[j] == arr[i]))
        { //* check how many times number was repeated
            count++;
            j++;
        }
        if (count >= 2)
        {
            voters.push_back(arr[i]);
        }

        i = j;
    }
    return voters;
}

void pgsolve()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int total = n1 + n2 + n3;
    vi a(total);
    rep(i, total)
    {
        cin >> a[i];
    }
    sortall(a);
    // rep(i, total)
    // {
    //     cout << a[i]<<" ";
    // }
    // cout << endl;
    vi b;

    for (int i = 0; i < total; i++)
    {
        int count = 0;
        while (i < total && (a[i] == a[i + 1]))
        {
            count++;
            i++;
            if (count == 1)
            {
                b.pb(a[i]);
                // break;
            }
        }
    }
    cout << b.size() << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << endl;
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

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}