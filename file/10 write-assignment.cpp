#include <iostream>
#include <fstream>
using namespace std;
int main () {

    ofstream filestream("testout.txt", ios:: app);
    if (filestream.is_open())
    {

        char c;
     
        c = '\n';
        filestream.put(c);
        c = 'h';
        filestream.put(c);
        c = 'e';
        filestream.put(c);
        c = 'l';
        filestream.put(c);
        c = 'l';
        filestream.put(c);
        c = 'o';
        filestream.put(c);
        filestream.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}  