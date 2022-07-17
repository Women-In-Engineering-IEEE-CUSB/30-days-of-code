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
/* There are NN piles where the i^{th}i
th
  pile consists of A_iA
i
​
  stones.

Chef and Chefina are playing a game taking alternate turns with Chef starting first.
In his/her turn, a player can choose any non-empty pile and remove exactly 11 stone from it.

The game ends when exactly 22 piles become empty. The player who made the last move wins.
Determine the winner if both players play optimally.

EXPLANATION:
Let sumsum represent the total number of stones in all the NN piles and onesones and twostwos represent the total number of piles having exactly 11 and 22 stones respectively.
The problem can now be solved by dividing it into three cases:
Case 1 : There are at least two piles which have exactly 11 stone each.
Removing a stone from a pile that contains exactly 11 stone is a definite losing move as the opponent can then remove a stone from another pile that contains 11 stone and win the game. Therefore the players will keep removing stones until all piles contain exactly 11 stone each.
\therefore if\: sum - N∴ifsum−N is odd the winner is Chef otherwise Chefina;
Case 2 : There is exactly one pile that contains exactly 11 stone.
If the sumsum is odd chef can remove a stone from pile that contains a single stone. Now the game reduces to Game of Piles 11 with N-1N−1 remaining piles where the game ends when exactly one pile becomes empty and Chefina starts first and Chef wins when sum-1sum−1 is even or sumsum is odd. If the sumsum is even but there is a pile which contains exactly 22 stones then chef can remove a stone from that pile (this now reduces to case 11) and win the game if sum-1-Nsum−1−N is even or sum-Nsum−N is odd otherwise removing a stone from the pile containing 11 stone or 22 stones becomes a losing move for chef. Chefina can remove a stone from the pile containing 11 stone in the next move and win the game by applying the same strategy after that as in Game of piles 11.
\therefore if\: sum∴ifsum is odd or twos\geq 1twos≥1 and sum-Nsum−N is odd then the winner is Chef otherwise Chefina.
Case 3 : There is no pile that contains exactly 11 stone.
The parity of sumsum becomes same as original after every move made by Chefina and as soon as a pile becomes empty the game is reduced to Game of piles 11 again. If the parity of sum is initially odd the parity of sum when one one pile becomes empty is also odd and chef needs to move first. Therefore from the strategy of Game of piles 11 we have,
if\: sumifsum is odd the winner is Chef otherwise Chefina */
void pgsolve()
{
    int n, ones = 0, twos = 0;
    ll sum = 0;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ones += (v[i] == 1);
        twos += (v[i] == 2);
        sum += v[i];
    }
    if (ones > 1)
    {
        if ((sum - n) & 1)
            cout << "CHEF\n";
        else
            cout << "CHEFINA\n";
    }
    else if (ones == 1)
    {
        if (sum & 1)
            cout << "CHEF\n";
        else
        {
            if (twos == 0)
                cout << "CHEFINA\n";
            else if ((sum - n) & 1)
                cout << "CHEF\n";
            else
                cout << "CHEFINA\n";
        }
    }
    else
    {
        if (sum & 1)
            cout << "CHEF\n";
        else
            cout << "CHEFINA\n";
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