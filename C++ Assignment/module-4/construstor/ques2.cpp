// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;
class Calculator
{
    public:
    int num1,num2,add,subtract,mul,div;
    public:
    Calculator()
    {
        cout<<"Enter Numbers: "<<endl;
        cin>>num1>>num2;
        add=num1+num2;
        cout<<"Addition: "<<endl<<num1<<" + "<<num2<<" = "<<add<<endl;
        // subtract=num1-num2;
        // cout<<"Subtraction: "<<endl<<num1<<" - "<<num2<<" = "<<subtract<endl;
        mul=num1*num2;
        cout<<"Multiplication: "<<endl<<num1<<" * "<<num2<<" = "<<mul<<endl;
        div=num1/num2;
        cout<<"Division: "<<endl<<num1<<" / "<<num2<<" = "<<div<<endl;

    }

};
int main()
{
    Calculator demo;
}
