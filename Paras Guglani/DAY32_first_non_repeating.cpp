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

// using map
char nonRepetingStringChar(string str)
{
    map<char, int> feq;
    //* count frequency of string's characters
    for (int i = 0; i < str.length(); i++)
    {
        feq[str[i]]++;
    }
    //* if string frequency is 1 then return
    for (auto ch : str)
    {
        if (feq[ch] == 1)
        {
            return ch;
        }
    }
    return str[0];
}

char firstNonRepeatingCharacter(string str)
{
 
    int n = str.size();

    int hash[57] = {0};
    rep(i, n)
    {
        hash[str[i] - 'A']++;
    }
    int repeated = 0;

    rep(i, n)
    {
        if (hash[str[i] - 'A'] == 1)
        {

            repeated = 1;
            return str[i];  //? return the first non repeating character
        }
    }


    return str[0]; // if all are repeated
}


void pgsolve()
{
    string str;
    cin >> str;
    cout << firstNonRepeatingCharacter(str)<<endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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