#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    double salary;
    public:
    void getdata()
       {
        cout<<"enter id,name,salary of the employee"<<endl;
        cin>>id>>name>>salary;
    }
    void displaydata()
    {
        cout<<"ID="<<id<<endl<<"Name="<<name<<endl<<"salary="<<salary;
    }
};
int main()
{
    employee heya;
    heya.getdata();
    heya.displaydata();
    return 0;
}