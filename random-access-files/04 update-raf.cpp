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

    fstream file("file.dat", ios::in|ios::out |ios::binary);
    if (file.is_open())
    {
        Student s;
        Student u;
        int id = 2;
        u.studentId = 2;
        u.studentName = "Shahid Khan";
        int found = 0 ;
        cout <<"updating.... "  << endl;
        while(file.read(reinterpret_cast<char *>(&s), sizeof s)) {
            cout <<"looking ... "  << s.studentId <<endl;
            if (s.studentId == id) {
                long pos = -1 * sizeof u;
                file.seekp(pos, ios::cur);
                file.write(reinterpret_cast<char *>(&u), sizeof u);
                found = 1;
                cout <<"record updated";
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