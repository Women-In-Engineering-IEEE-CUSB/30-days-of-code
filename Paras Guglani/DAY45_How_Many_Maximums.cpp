#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        if (N == 2)
        {
            cout << "1" << endl;
            continue;
        }
        // count=0  declare,loop <N,s[i]<s[i+1] to count++,first ele 1 to ++,last 0 to ++
        int count = 0;
        for (int i = 1; i < (N - 1); i++)
        {
            if (S[i] == '1' && S[i - 1] == '0')
            {
                count++;
            }
        }
        if (S[N - 2] == '0')
        {
            count++;
        }
        if (S[0] == '1')
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}