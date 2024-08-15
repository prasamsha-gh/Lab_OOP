// 1) Write a program that prompts the user for their name and age, and then outputs
// a message that says "Hello, [name]! You are [age] years old."
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}