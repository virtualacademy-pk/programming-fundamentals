#include <iostream>
#include <fstream>
using namespace std;
int main () {

    ofstream filestream("testout.txt", ios:: app);
    if (filestream.is_open())
    {

        char c;
        while(c != '\n' ) {
            c = getchar();
            filestream.put(c);
        }

        filestream.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}