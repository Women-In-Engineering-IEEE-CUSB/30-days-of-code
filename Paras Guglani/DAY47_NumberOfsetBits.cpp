#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    // find the number of 1's in the binary representation of n
    while (n > 0)
    {
        ans += n & 1;
        n >>= 1;
    }
    cout << ans << endl;
    return 0;
}