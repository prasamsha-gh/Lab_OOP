// 8) Write a program that defines a function that takes two arguments: an integer
// and a string. The function should have a default argument for the string, so
// that if it is not provided when the function is called, the default value "Default
// String" will be used.
#include <iostream>
using namespace std;
void function(int a, string b = "Default String")
{
    cout << a << " " << b << endl;
}
int main()
{
    function(10, "Hello");
    function(20);

    return 0;
} 