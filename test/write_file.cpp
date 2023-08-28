// write text to a file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // open file
    ofstream file("../filename.txt");
    // check if file is open
    if (file.is_open())
    {
        // write to file
        file << "Hello World!" << endl;
        // close file
        file.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
}