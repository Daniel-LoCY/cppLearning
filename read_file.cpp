// read text from file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // open file
    ifstream file("../filename.txt");
    // check if file is open
    if (file.is_open())
    {
        // read file line by line
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        // close file
        file.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
}