
#include <iostream>
#define CLRSCR  system("clear")
using namespace std;
int main()
{
    struct Student {
        int rollNo;
        string studentName;
        float marks;
    };

    int size = 3;
    Student record[size];
    for ( int i = 0 ; i < size; i++) {

        CLRSCR;
        cout << "Record # " << i + 1 << endl;
        cout <<"Enter Roll # ";
        cin >> record[i].rollNo;
        cout <<"Enter Name ";
        cin >> record[i].studentName;
        cout <<"Enter Marks ";
        cin >> record[i].marks;


    }
    cout <<"ROll #     " << "Name          " << "Marks" << endl;
    for ( int j = 0 ; j < size; j++) {
        cout << record[j].rollNo << "          ";
        cout << record[j].studentName << "          ";
        cout << record[j].marks<< endl;
    }
    return 0;
}




