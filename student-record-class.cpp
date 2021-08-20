
#include <iostream>
#include<stdlib.h>
#define CLRSCR  system("clear")
using namespace std;
int main()
{
    class Student {
    private:
        int rollNo;
        string studentName;
        float marks;
    public:
        void setRollNo(int rollNo) {
            this->rollNo = rollNo;
        }

        int getRollNo() {
            return this->rollNo;
        }

        void setStudentName(string studentName) {
            this->studentName = studentName;
        }

        string getStudentName() {
            return this->studentName;
        }

        void setMarks(float marks) {
            this->marks = marks;
        }

        float getMarks() {
            return this->marks;
        }

    };

    int size = 3;
    Student record[size];
    int rollNo;
    float marks;
    string sname;
    for ( int i = 0 ; i < size; i++) {

        CLRSCR;
        cout << "Record # " << i + 1 << endl;
        cout <<"Enter Roll # ";
        cin >> rollNo;
        record[i].setRollNo(rollNo);
        cout <<"Enter Name ";
        cin >>sname;
        record[i].setStudentName(sname);
        cout <<"Enter Marks ";
        cin >> marks;
        record[i].setMarks(marks);


    }
    cout <<"ROll #     " << "Name          " << "Marks" << endl;
    for ( int j = 0 ; j < size; j++) {
        cout << record[j].getRollNo() << "          ";
        cout << record[j].getStudentName() << "          ";
        cout << record[j].getMarks()<< endl;
    }

    return 0;
}




