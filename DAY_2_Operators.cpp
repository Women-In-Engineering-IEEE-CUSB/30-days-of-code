#include <iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,multy;
    float div,modulus;

    cout<<"Enter the no. :"<<endl;
    
    cin>>a>>b;
    
    sum=a+b;
    sub=a-b;
    multy=a*b;
    div=a/b;
    modulus=a%b;

    cout<<"Answer of Addition"<<" = "<<sum<<endl;
    cout<<"Answer of Subtraction"<<" = "<<sub<<endl;
    cout<<"Answer of Multipication"<<" = "<<multy<<endl;
    cout<<"Answer of Division"<<" = "<<div<<endl;
    cout<<"Answer of Modulus"<<" = "<<modulus<<endl;

    return 0;
}
