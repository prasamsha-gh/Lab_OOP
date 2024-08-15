// 9) Write a program that demonstrates the use of the different storage classes in
// C++ (local, global, static, and extern). Define a variable with each storage
// class and print the value of the variable in the main () function.
#include <iostream>
#include "externdefine.cpp"
using namespace std;
int b = 10;        // global variable
static int c = 20; // static variable
extern int d;      // extern variable

int main()
{
    int a = 50; // local variable
    cout << "Local variable a: " << a << endl;
    cout << "Global variable b: " << b << endl;
    cout << "Static variable c: " << c << endl;
    cout << "Extern variable d: " << d << endl;
    return 0;
}