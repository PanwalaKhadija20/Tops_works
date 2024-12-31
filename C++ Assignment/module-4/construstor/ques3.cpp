// Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
// Implement memberfunctions to get and set these variables.

#include<iostream>
using namespace std;
class Car
{
    private:
    int year;
    string company,model;
    public:
    void set_data()
    {
        this->year=year;
        this->company=company;
        this->model=model;
    }
    void get_data()
    {
        cout<<"Enter Your Preffered Comapany: "<<endl;
        cin>>company;
        cout<<"Enter Your Preferred Model: "<<endl;
        cin>>model;
        cout<<"Enter Model Year: "<<endl;
        cin>>year;
    };
}; 
int main()
{
    Car c1;
    c1.set_data();
    c1. get_data();
}

