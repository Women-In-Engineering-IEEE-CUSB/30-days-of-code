#include <bits/stdc++.h>
using namespace std;

int getsubsequences(string str, string subsequences[])
{
    if(str.empty())
    {
        subsequences[0]=" ";
        return 1;
    }
    int smallStringLength=getsubsequences(str.substr(1),subsequences);
    for (int i = 0; i < smallStringLength; i++)
    {
        subsequences[smallStringLength+i]=str[0]+subsequences[i];
    }
    return smallStringLength*2;
    


}

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    n=pow(2,n);
    string subsequences[1000];

int count=    getsubsequences(str,subsequences);
    for (int i = 0; i < count; i++)
    {
        cout<<subsequences[i]<<endl;
    }
    



    return 0;
}