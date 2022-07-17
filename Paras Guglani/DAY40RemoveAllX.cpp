#include <bits/stdc++.h>
using namespace std;
// char array using recursion

void removeX(char s[])
{
    if (s[0] == '\0')
    {
        return;
    }

    if (s[0] != 'x')
    {
        removeX(s + 1);
    }
    else
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeX(s);
    }
}
//using string
string removex(string str)
{
    if (!str.empty())
    {
        if (str[0] == 'x')
            str = removex(str.substr(1));
        else
            str = str[0] + removex(str.substr(1));
    }
    return str;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        str= removex(str);
        // remove erase idiom
        // remove function removes all occurunces of x but doesn't reduce size of string and gives iterator to the end
        // erase function use that iterator to reduce actual length
        // str.erase(remove(str.begin(), str.end(), 'x'), str.end());
        // https://www.youtube.com/watch?v=pp5Hpo8duC8
        // https://stackoverflow.com/questions/72482493/removing-x-from-a-string-using-pass-by-pointer-with-recursion?noredirect=1#comment128043908_72482493
        cout << str << endl;
    }

    return 0;
}