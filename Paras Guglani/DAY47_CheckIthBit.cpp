#include <bits/stdc++.h>
using namespace std;
bool checkI(int n, int i)
{
    //-1 if bits are from 1 to 8 else just i
    return (n & (1 << i - 1));
}

int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    bool ans = checkI(n, i);
    if (ans)
        cout << "set" << endl;
    else
        cout << "unset" << endl;

    return 0;
}