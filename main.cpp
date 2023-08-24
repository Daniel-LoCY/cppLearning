// write hello world to the console

#include <iostream>

// namespace for C++ standard library
using namespace std;

// main function
int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
    return 0;
}