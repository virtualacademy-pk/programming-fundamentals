
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

        void dataEntry() {
            cout <<"Enter Roll # ";
            cin >> this->rollNo;
            cout <<"Enter Name ";
            cin >> this-> studentName;
            cout <<"Enter Marks ";
            cin >> this->marks;
        }

        void printRecord() {
            cout << this->rollNo << "          ";
            cout << this->studentName << "          ";
            cout << this->marks<< endl;
        }

    };

    int size = 3;
    Student *records[size];
    int rollNo;
    float marks;
    string sname;
    for ( int i = 0 ; i < size; i++) {

        CLRSCR;
        records [i] = new Student;
        records[i]->dataEntry();

    }
    cout <<"ROll #     " << "Name          " << "Marks" << endl;
    for ( int j = 0 ; j < size; j++) {
        records[j]->printRecord();
    }

    return 0;
}




