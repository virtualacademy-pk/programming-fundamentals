#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string srg;
    ifstream filestream("testout.txt");
    if (filestream.is_open())
    {
         cout << "File exist";
        filestream.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}  