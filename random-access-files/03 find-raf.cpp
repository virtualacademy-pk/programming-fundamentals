#include <iostream>
#include <fstream>
#include "product.cpp"
using namespace std;
class Student {
public:
    int studentId;
    string studentName;
};
int main () {

    ifstream file("file.dat", ios::binary);
    if (file.is_open())
    {
        Student s;
        int id = 2;
        int found = 0 ;
        cout <<"searching"  << endl;
        while(file.read(reinterpret_cast<char *>(&s), sizeof s)) {
            cout <<"looking ... "  << s.studentId << endl;
            if (s.studentId == id) {
                cout << s.studentId << ", " << s.studentName << endl;
                found = 1;
                break;
            }

        }
        if (found == 0 ) {
            cout << "Record not found";
        }


        file.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }

    return 0;
}  