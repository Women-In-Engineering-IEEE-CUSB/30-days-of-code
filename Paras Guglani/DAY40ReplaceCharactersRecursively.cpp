/* Replace Character Recursively
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd */
#include <bits/stdc++.h>
using namespace std;
string replaceChar(string str,char replace,char replaceWith)
{
    if (!str.empty())
    {
        if (str[0] == replace)
            str = replaceWith+ replaceChar(str.substr(1),replace,replaceWith);
        else
            str = str[0] + replaceChar(str.substr(1), replace, replaceWith);
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
        char replace,replacewith;
        cin>>replace>>replacewith;
        str = replaceChar(str,replace,replacewith);
        cout<<str<<endl;
    }
    return 0;
}