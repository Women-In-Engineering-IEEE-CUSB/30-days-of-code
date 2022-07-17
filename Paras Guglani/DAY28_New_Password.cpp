#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
void google(int t) { cout << "Case #" << t << ": "; }
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
int caseno = 1;
#define UPPER s[i] >= 'A' && s[i] <= 'Z'
#define LOWER s[i] >= 'a' && s[i] <= 'z'

string passwordValidator(string s, int size)
{

    int i, numdig, low, up, spChar;
    numdig = low = up = spChar = 0;
    for (i = 0; i < size; i++)
    {

        if (UPPER)
            up++;
        else if (LOWER)
            low++;
        else if (s[i] == '*' || s[i] == '&' || s[i] == '@' || s[i] == '#')
            spChar++;
        else if (s[i] >= 48 && s[i] <= 57)
            numdig++;
    }
    if (!numdig)
    {
        s = s + '0';
    }
    if (!up)
    {
        
        s = s + 'A';
    }
    if (!low)
    {
        s = s + 'a';
    }
    if (!spChar)
    {
        s = s + '*';
    }

    size = s.size();

    // cout << "here" << endl;
    if (size < 7)
    {
        string s2(7 - size, 'A');
        s = s + s2;
    }

    return s;
}

void pgsolve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;
    cout << "Case #" << caseno << ": " << passwordValidator(str, n) << endl;
    caseno++;
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