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
    #define     pii pair<int, int>
    #define vi vector<int>
    void pgsolve()
    {
        int i, j, n, sum;

        cin >> n >> sum;
        // int a =0;
        // int divisor =n/4;

        //for k<n;

        int till;
        int modulo = n % 4;
        till = n + 8 - modulo;
        if (modulo == 0)
        {
            till -=4;
        }
        if (sum < 4 || sum > n)
        {

            till -=4;
        }

        // vi a(n);

        for (int i = 4; i < till; i++)
        {
            int to_skip = (i / 4) * 4;
            int sum_to_skip = (sum / 4) *4;
            if (to_skip == sum_to_skip)
            {
                // cout<<"skipped"<< i <<" ";
                continue;
            }
            // cout<<"lo "<<i<<" ";
            cout << i << " ";
        }
        if (n % 4 == 0)
        {
            // 103079215104 42949672960 77309411328 triplet whose xor is 0
            // cout << 103079215104 << " " << 42949672960 << " " << 77309411328 << " " << sum;
            cout << 100001 << " " << 197110 << " " << 165719 << " " << sum;
        }
        
        else if (n % 4 == 3)
        {
            // int D = LLONG_MAX ^ sum;
            int D = 197110 ^ sum;

            // cout<<D<<" "<<LLONG_MAX<< " "<<sum;
            // cout << 0 << " " << LLONG_MAX << " " << D;
            cout << 0 << " " << 197110 << " " << D;
            
        }
        else if (n % 4 == 2)
        {
            cout << sum << " " << 0;
        }
        else if (n % 4 == 1)
        {
            cout << sum;
        }

        cout << endl;
    }

    int32_t main()

    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        auto start1 = high_resolution_clock::now();

    #ifdef _WIN32
        freopen("Error.txt", "w", stderr);
    #endif

        w(t)
        {
            pgsolve();
        }
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifdef _WIN32
        cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
    #endif
        return 0;
    }