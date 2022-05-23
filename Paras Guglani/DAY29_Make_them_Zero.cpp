#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r[32] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int p, q = 0;
            cin >> p;
            while (p)
            {
                if (r[q] == 0)
                    r[q] = p % 2;
                p /= 2;
                q++;
            }
        }
        int count = 0;
        for (int i = 0; i < 32; i++)
        {

            count += r[i];
        }
        cout << count << endl;
    }
    return 0;
}