#include<iostream>
using namespace std;
class demo
{
	private:
		int a;
	public:
			void getdata()
			{
				cout<<"enter the value of A:"<<endl;
				cin>>a;
			}
			void sum(demo *ob1,demo *ob2)
			{
				(*ob1).a=2;
				(*ob2).a=4;
				a=(*ob1).a+(*ob2).a;
			}
			void print()
			{
				cout<<"value of A:"<<a<<endl;
			}
};
int main()
{
	demo d1,d2,d3;
	cout<<"enter data for d1:"<<endl;
	d1.getdata();
	cout<<"enter data for d2:"<<endl;
	d2.getdata();
	cout<<"Before passing d1 and d2 as a function argument"<<endl;
	d1.print();
	d2.print();
    d3.sum(&d1,&d2);
	cout<<"After passing d1 and d2 as a function argument"<<endl;
	d1.print();
	d2.print();
	d3.print();
	return 0;	
}
