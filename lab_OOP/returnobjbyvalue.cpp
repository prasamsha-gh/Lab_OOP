#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
		void getdata();
		void putdata();
		test sum(test,test);
};
void test::getdata()
{
	cout<<"values of a and b are:"<<endl;
	cin>>a>>b;
}
test test::sum(test t1,test t2)
{
	test t3;
	t3.a=t1.a+t2.a;
	t3.b=t1.b+t2.b;
	return t3;
}
void test::putdata()
{
	cout<<"A value is:"<<a<<endl;
	cout<<"B value is :"<<b<<endl;
}
int main()
{
	test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3=t3.sum(t1,t2);
	t3.putdata();
	return 0;
}
