#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;
int main()
{
    string input;

    ifstream is;
    string line;
    char *tokenPtr;
    int totalSalary = 0;
    is.open("json.txt");

    while (!is.eof())
    {
         getline (is, line );
        char *cstr = new char[line.length() + 1];
        strcpy(cstr, line.c_str());
        strtok(cstr, ":");
        tokenPtr = strtok(NULL, ":");


        totalSalary += atoi(tokenPtr);

    }
    cout <<"Total Salary: " << totalSalary;
    is.close();
    return 1;
}  