//Program to find greatest of three numbers using conditional operator

#include<iostream>
using namespace std;

int main() {
    int a, b, c, largest;
 
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
 
    largest = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    cout<<"The largest number is: "<<largest<<endl;
}
