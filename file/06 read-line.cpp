#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
int main()
{
    char *input;

    ifstream is;
    string line;
    is.open("testout.txt");
    cout << "Reading from a text file:" << endl;
    while (!is.eof())
    {
        getline (is,line);
        cout << line << endl;
    }
    is.close();
}  