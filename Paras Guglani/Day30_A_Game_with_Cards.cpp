#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;

#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define loop(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)

void pgsolve()
{
    int n, m;
    cin >> n;
    int alice_max = 0, bob_max = 0;
    loop(i, n)
    {
        int a;
        cin >> a;
        if (a > alice_max)
        {
            alice_max = a;
        }
    }
    cin >> m;
    loop(i, m)
    {
        int a;
        cin >> a;
        if (a > bob_max)
        {
            bob_max = a;
        }
    }
    if (alice_max > bob_max)
    {
        cout << "Alice" << endl;
        cout << "Alice" << endl;
    }
    else if (bob_max > alice_max)
    {
        cout << "Bob" << endl;
        cout << "Bob" << endl;
    }
    else
    {
        // cout << alice_max << " " << bob_max;
        cout << "Alice" << endl;
        cout << "Bob" << endl;
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