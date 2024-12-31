//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
inline int multi(int a)
{
    return a*a;
}
inline int cube(int a)
{
    return a*a*a;
}

int main(){
    int a;
    cout<<"Enter numbers:";
    cin>>a;
    cout<<"Square="<<multi(a)<<endl;
    cout<<"Cube="<<cube(a)<<endl;
}