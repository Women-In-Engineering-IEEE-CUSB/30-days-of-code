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
    int r, c;
    cin >> r >> c;
    int person;
    cin >> person;
    int seats = r * c;
    if (seats > person)
    {
        cout << person << " "
             << "0 " << endl;
        return;
    }
    cout << seats << " " << person - seats << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // auto start1 = high_resolution_clock::now();

    // Input File : sitin.txt
    freopen("sitin.txt", "r", stdin);
    // // Output File : sitout.txt
    freopen("sitout.txt", "w", stdout);

    pgsolve();

    // auto stop1 = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stop1 - start1);

    return 0;
}