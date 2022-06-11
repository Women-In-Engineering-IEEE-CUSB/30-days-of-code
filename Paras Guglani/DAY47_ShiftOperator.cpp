#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int ans = 0;
    n >>= 1; // n = floor of  n/2 //right shift by 1 bit
    // if number is negative, then we need to add 1 to the left side of the number if it is positive, then we need to add 0 to the left side of the number


    n <<= 1; // n = n*2 //left shift by 1 bit

    // we can't shift by negative numbers in cpp
    cout << n << endl;
    return 0;
}