#include <iostream>
#include <fstream>
using namespace std;
int main () {

   string name, marks, grade;
    ifstream filestream("marks.txt");
    if (filestream.is_open())
    {
         while(!filestream.eof()) {
             filestream >> name >> marks >>grade;
             cout << name << "\t" << marks << " \t" << grade << endl;

         }


        filestream.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }
    return 0;
}  