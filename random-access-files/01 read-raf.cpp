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

        while(file.read(reinterpret_cast<char *>(&s), sizeof s)){
            cout << s.studentId << ", " << s.studentName << endl;
        }


        file.close();
    }
    else {
        cout << "File opening is fail."<<endl;
    }

    return 0;
}  