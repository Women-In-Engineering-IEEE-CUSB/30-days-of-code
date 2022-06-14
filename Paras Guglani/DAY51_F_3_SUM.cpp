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

//Since we only care about the last digit of the sum ai+aj+ak, we can ignore all numbers other than the last digits of the elements of a. (For example, we can consider [20,22,19,84] to be the same as [0,2,9,4].)

/* Now note that if a number appears more than 3 times in the array, we can ignore all copies that occur more than 3 times, since our sum ai+aj+ak only involves three numbers. (For example, we can consider [1,1,1,1,2] to be the same as [1,1,1,2].)

Using these observations, note that there are only 10 digits, and each digit can occur at most 3 times. So we can always reduce the array to one of length 30. Since 30 is very small, we can brute force all triples ai+aj+ak, which runs quickly enough.

Time complexity: O(n+min(n,30)3). */
void pgsolve()
{
    int n;
    cin >> n;
    int cnt[10] = {};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x % 10]++;
    }
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < min(cnt[i], 3ll); j++)
        {
            v.push_back(i);
        }
    }
    int m = v.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if ((v[i] + v[j] + v[k]) % 10 == 3)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";

    //misread question
    // int n;
    // cin >> n;
    // string arr[n];
    // int sum1 = 0;
    // int sum2 = 0;
    // int sum3 = 0;
    // rep(i, n)
    // {
    //     cin >> arr[i];
    //     int length = arr[i].length();
    //     int sum = 0;
    //     rep(j, length)
    //     {
    //         sum += arr[i][j] - '0';
    //     }
    //     if (sum % 3 == 0)
    //     {
    //         sum3 ++;
    //     }
    //     else if (sum % 3 == 1)
    //     {
    //         sum1 ++;
    //     }
    //     else
    //     {
    //         sum2++;
    //     }
    //     if(sum1>=3 || sum2>=3 || sum3>=3)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     if(sum3==1 && sum1==1 && sum2==1)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     // cout << sum << " ";
    // }
    // cout<<"NO"<<endl;
    // // cout << endl;
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