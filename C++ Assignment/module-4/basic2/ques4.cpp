/*
Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.

*/
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    float length,breadth,area,perimeter;
    public:
    Rectangle()
    {
        cout<<"Enter Length: ";
        cin>>length;
        cout<<"Enter Breadth: ";
        cin>>breadth;
        area=length*breadth;
        cout<<"Area Of Rectangle:"<<area<<endl;
        perimeter=2*(length+breadth);
        cout<<"Perimeter Of Rectangle:"<<perimeter<<endl;
    }
};
int main()
{
    Rectangle();
}