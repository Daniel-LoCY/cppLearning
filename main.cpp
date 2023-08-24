// write hello world to the console

#include <iostream>
#include "main.h"

const int a = 5;

// namespace for C++ standard library
using namespace std;

// main function
int main()
{
    printMessage(a);
    // pause the console of ubuntu
    system("read -p 'Press Enter to continue...' var");
    return 0;
}