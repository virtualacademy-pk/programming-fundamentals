#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string str;
    ifstream filestream("testout.txt");
    if (filestream.is_open())
    {
        /*while ( getline (filestream,srg) )
        {
            cout << srg <<endl;
        }*/
         filestream >> str;
         cout<< srg;
        filestream >> str;
        cout<< str;
        filestream.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}  