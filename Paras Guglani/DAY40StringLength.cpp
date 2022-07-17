#include <bits/stdc++.h>
using namespace std;
int length(string str)
{
    if (str[0] == '\0')
    {
        return 0;
    }
    return length(str.substr(1)) + 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int stringLength = length(str);
        cout << stringLength << endl;
    }
    return 0;
}