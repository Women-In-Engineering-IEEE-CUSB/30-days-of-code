/* Return Keypad Code
Send Feedback
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf */


#include <bits/stdc++.h>
using namespace std;

string keyPad[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int getKeypadString(int n, string keypadSequence[])
{
    if(n == 0)
        return 1;
    int first_digit = n % 10 -2;
    int smallStringLength = getKeypadString(n / 10, keypadSequence);

    string s=keyPad[first_digit];

    for (int i = 1; i < s.length(); i++)
    {
        for (int j = 0; j < smallStringLength; j++)
        {
            keypadSequence[j + i * smallStringLength] = keypadSequence[j];
        }
    }
    for (int j = 0; j < s.length(); j++)
    {
        for (int i = 0; i < smallStringLength; i++)
        {
            keypadSequence[i + j * smallStringLength] += s[j];
        }
    }

       return smallStringLength*s.length();

}

int main()
{
    int n;
    cin>>n;
    // int n = str.length();
    // n = pow(2, n);
    string keypadSequence[1000];

    int count = getKeypadString(n, keypadSequence);
    for (int i = 0; i < count; i++)
    {
        cout << keypadSequence[i] << endl;
    }

    return 0;
}