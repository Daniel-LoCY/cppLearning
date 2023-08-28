// write hello world to the console

#include <iostream>
#include <calc/calc.h>

using namespace std;

int main(int args, char **argv)
{
    // add all the arguments
    int sum = 0;
    for (int i = 1; i < args; i++)
    {
        sum = Add(sum, atoi(argv[i]));
    }
    cout << sum << endl;

    return 0;
}

// int main()
// {
//     int a = 1;
//     int b = 2;

//     int c = Add(a, b);
//     cout << c << endl;

//     // // pause the console of ubuntu
//     // system("read -p 'Press Enter to continue...' var");
//     return 0;
// }