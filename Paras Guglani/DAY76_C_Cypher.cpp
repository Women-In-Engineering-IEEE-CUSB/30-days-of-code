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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        string code;
        cin >> code;
        int Dcount = 0;
        int Ucount = 0;
        for (int j = 0; j < size; j++)
        {
            if (code[j] == 'D')
            {
                Dcount++;
            }
            else
            {
                Ucount++;
            }
        }
        int moves = 0;
        if (Ucount > Dcount)
        {
            moves = Ucount - Dcount;
            for (int k = 0; k < moves; k++)
            {
                arr[i]--;

                if (arr[i] == -1)
                {
                    arr[i] = 9;
                }
            }
        }
        else
        {
            moves = Dcount - Ucount;
            for (int k = 0; k < moves; k++)
            {

                arr[i]++;

                if (arr[i] == 10)
                {
                    arr[i] = 0;
                }
            }
        }
    }
/* 
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b == 0)
        {
            continue;
        }
        string now;
        cin >> now;
        for (int j = 0; j < b; j++)
        {
            if (now[j] == 'U')
            {
                arr[i]--;
            }
            else if (now[j] == 'D')
            {
                arr[i]++;
            }
            if (arr[i] < 0)
            {
                arr[i] += 10;
            }
            if (arr[i] > 9)
            {
                arr[i] -= 10;
            }
        }
    }
 */
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;



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