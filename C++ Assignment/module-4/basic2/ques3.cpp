/* 
Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/
#include<iostream>
#define PI 3.14
using namespace std;
class Circle
{
    private:
    float radi,area,circumfer;
    public:
    Circle()
    {
        cout<<"Enter Radius: "<<endl;
        cin>>radi;
        area=PI*radi*radi;
        cout<<"Area Of Circle :"<<area<<endl;
        circumfer=2*PI*radi;
        cout<<"Circumference Of Circle :"<<circumfer<<endl;

    }

};
int main()
{
    Circle();
}