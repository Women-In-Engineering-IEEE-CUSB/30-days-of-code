#include <bits/stdc++.h>
using namespace std;
int unSetI(int n, int i)
{
    return (n & ~(1 << i));
}

int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    n= unSetI(n, i);
    cout<<n<<endl;

    return 0;
}