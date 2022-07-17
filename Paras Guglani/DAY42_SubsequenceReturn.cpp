#include <bits/stdc++.h>
using namespace std;

int getsubsequences(string str, string subsequences[])
{
    if(str.empty())
    {
        subsequences[0]=" ";
        return 1;
    }
    // size of output array after passing input without the first character
    int smallStringLength=getsubsequences(str.substr(1),subsequences);
    // adding the not passed charcter to first index of every returned string and apppending to output array
    for (int i = 0; i < smallStringLength; i++)
    {
        subsequences[smallStringLength+i]=str[0]+subsequences[i];
    } 
    // now size of output will be twice the original
    return smallStringLength*2;
    


}

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    n=pow(2,n);
    string subsequences[n];

int count=    getsubsequences(str,subsequences);
    for (int i = 0; i < count; i++)
    {
        cout<<subsequences[i]<<endl;
    }
    



    return 0;
}