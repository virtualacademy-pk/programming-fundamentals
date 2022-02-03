#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ofstream filestream("testout.txt");
    cout <<"Opening file.....";
    if (filestream.is_open())
    {
        filestream << "Welcome to virtualacademy of pakistan.\n";
        filestream << "C++ Tutorial.\n";
        filestream.close();
    }
    else cout <<"File opening is fail.";
    return 0;
} 