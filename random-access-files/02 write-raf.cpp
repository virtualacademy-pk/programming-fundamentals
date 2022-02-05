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

    fstream file("file.dat", ios::in | ios::out|ios::app|ios::binary);
    if (file.is_open())
    {
        Student s;
        s.studentId = 2;
        s.studentName = "Shahid Ali";

        file.write(reinterpret_cast<char *>(&s), sizeof s);

        file.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }

    return 0;
}  