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
bool isvowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void pgsolve()
{
    int n;
    cin >> n;
    string str, temp;
    cin >> str;
    char res[n];
    rep(i, n)
    {
        res[i] = str[i];
    }
    int last = n - 1;
    while (last >= 0 && isvowel(str[last]) == false)
    {
        last--;
    }
    last--;
    int st = 0, end = last, ind = last, rev = 0;

    while (ind >= 0)
    {
        temp = "";
        while (ind >= 0)
        {
            if (isvowel(str[ind]) == true)
            {
                temp.pb(str[ind--]);
                break;
            }
            else
            {
                temp.pb(str[ind]);
            }
            ind--;
        }
        if (rev % 2 == 1)
        {
            for (auto x : temp)
            {
                res[end] = x;
                end--;
            }
        }
        else
        {
            for (auto x : temp)
            {
                res[st] = x;
                st++;
            }
        }
        rev++;
    }
    rep(i, n)
    {
        cout << res[i];
    }

//smaller but same
   /*  int n;
    cin >> n;
    vector<char> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<char> t(n);
    int l = 0;
    int r = n - 1;
    bool start = false;
    for (int i = n - 1; i >= 0; i--)
    {
        if (start)
        {
            t[l++] = s[i];
        }
        else
        {
            t[r--] = s[i];
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            start = !start;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << t[i];
    }
    cout << '\n'; */


    cout << "\n";
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