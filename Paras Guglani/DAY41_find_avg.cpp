#include <bits/stdc++.h>
using namespace std;
int findAverageRoundOff(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float avg = (float)sum / n;
    // cout<<"f "<<avg<<endl;
    // int(i*100 - (floor(i))*100)
    int first_digit = int(avg * 10 - (floor(avg) * 10));
    // cout<<first_digit<<" 1"<<endl;
    if (first_digit < 6)
    {
        return sum / n;
    }
    else
    {
        return sum / n + 1;
    }

    // int rounded = avg / avg * (avg + 0.5);
    // return rounded;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << findAverageRoundOff(a, n) << endl;
    }
    return 0;
}