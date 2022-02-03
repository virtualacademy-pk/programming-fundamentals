#include <iostream>
#include <fstream>
using namespace std;
int main () {

    ifstream filestream("testout.txt");
    if (filestream.is_open())
    {
        char c;
        while ( (c = filestream.get()) != EOF)
        {
            cout <<c;
        }
    }
    else {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}  