#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(char str[], set<char> s)
{
    if (str[0] == '\0')
    {
        return;
    }
    //* unique char (not present in set)
    if (s.find(str[0]) == s.end())
    {
        s.insert(str[0]);
        removeDuplicate(str + 1, s);
    }
    else
    { //* duplicate
        int i = 1;
        for (; str[i] != '\0'; i++)
        {
            str[i - 1] = str[i];
        }
        str[i - 1] = str[i];
        removeDuplicate(str, s);
    }
}

int main()
{

    // freopen("/home/spy/Desktop/input.txt", "r", stdin);
    // freopen("/home/spy/Desktop/output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--)
    {
        char str[1000];
        cin >> str;

        set<char> s;
        removeDuplicate(str, s);
        // consecutiveDuplicate(str);
        cout << str << endl;
    }
    return 0;
}