#include <bits/stdc++.h>
using namespace std;
int flipI(int n, int i)
{
    return (n ^ (1 << i));
}

int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    n= flipI(n, i);
    cout<<n<<endl;

    return 0;
}