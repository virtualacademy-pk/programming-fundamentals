#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;
int main()
{
    string input;

    ifstream is;
    string line;
    string name, marks, grade;
    is.open("data.txt");

    while (!is.eof())
    {
        getline (is, line );
        char *cstr = new char[line.length() + 1];
        strcpy(cstr, line.c_str());
        strtok(cstr, ":");
        name = cstr;
        marks = strtok(NULL, ":");
        grade = strtok(NULL, ":");
        cout << name << "\t" << marks << "\t" << grade<<endl;


    }

    is.close();
    return 1;
}  