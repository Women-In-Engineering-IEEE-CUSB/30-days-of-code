#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int w, x, y, z;
    // for any x bit x& 1 = x  and x &0 = 0
    x = a & b;

    // can be used to check odd or even more efficiently
    int num = 19;
    (num & 1) ? cout << "Odd" : cout << "Even";

    // for any x bit x| 1 = 1  and x |0 = x
    y = a | b;

    int sum2 = ((a | b) + (a & b));
    int and2 = (a + b - (a & b));
    int xor2 = (a + b - (a & b)) - (a | b);
    cout << "a+b = " << a + b << endl;
    cout << "a&b = " << (a & b) << "\n";

    // sum can be written as a+b+a&b
    cout << "sums are " << a + b << " " << sum2 << endl;
    // xor is the same as a + b - a&b
    z = a ^ b;

    // for any x bit x^ 1 = ~x  and x ^0 = x
    // to flip we can xor with 1

    w = ~a;
    //flip all the bits
    cout << x << " " << y << " " << z << " " << w << endl;

    int ans = 0;
    cout << a << " " << b << " " << c << endl;
    return 0;
}