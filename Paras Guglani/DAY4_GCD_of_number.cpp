//equilidion algorithm
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=30,b=15;
    int gcd=1;
    while(a!=0 && b!=0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    gcd=a+b;
    cout<<gcd;
    return 0;
}

// Time Complexity: O(log(min(a,b)))
// Space Complexity: O(1)
