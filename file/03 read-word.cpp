#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string srg;
    ifstream filestream("testout.txt");
    if (filestream.is_open())
    {
         while(!filestream.eof()) {
             filestream >> srg;
             cout<< srg;
         }


        filestream.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}  