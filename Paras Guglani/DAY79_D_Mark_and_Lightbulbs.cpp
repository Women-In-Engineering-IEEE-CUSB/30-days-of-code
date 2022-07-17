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
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
/* As explained in the sample explanations, the operation cannot change the first or the last bit. Thus, if either s1≠t1 or sn≠tn, simply return -1.

Now, the key idea is to consider a binary s¯¯¯=(s1⊕s2)(s2⊕s3)…(sn−1⊕sn) of length n−1, where a⊕b denotes the XOR operation of bits a and b. Then, it's easy to verify that the operation acts on s¯¯¯ by just swapping two different bits. An example is shown below

s000101↓001101↓011101↓011001↓011011↓010011s¯¯¯00111↓01011↓10011↓10101↓10110↓11010
Thus, the operation is possible if and only if s¯¯¯ and t¯ has the same number of 1's. Moreover, if a1,a2,…,ak are the positions of 1's in s and b1,b2,…,bk are the positions of 1's in t. Then, the minimum number of moves is given by

|a1−b1|+|a2−b2|+⋯+|ak−bk|,
which can be evaluated in O(n).

This is a well-known fact, but for completeness, here is the proof. Note that the operation is moving 1 to left or right by one position. Thus, to achieve that number of moves, simply move the first 1 from a1 to b1, move the second 1 from a2 to b2, …, and move the k-th 1 from ak to bk. For the lower bound, notice that the i-th 1 cannot move past the (i−1)-th or (i+1)-th 1. Thus, it takes at least |ai−bi| moves to move the i-th 1 from ai to bi. Summing gives the conclusion.

Note that another way to think about this problem is to look at the block of 1's and 0's and notice that the number of blocks remains constant. This is more or less the same as the above solution.
 */

void pgsolve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<ll> pos_s, pos_t;

    if (s[0] != t[0] || s[n - 1] != t[n - 1])
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
            pos_s.push_back(i);
        if (t[i] != t[i + 1])
            pos_t.push_back(i);
    }
    if (pos_s.size() != pos_t.size())
    {
        cout << -1 << "\n";
    }
    else
    {
        int k = pos_s.size();
        ll ans = 0;
        for (int i = 0; i < k; ++i)
        {
            ans += abs(pos_s[i] - pos_t[i]);
        }
        cout << ans << "\n";
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
