
#include <iostream>
#define CLRSCR  system("clear")
using namespace std;
int main()
{
    int size = 3;
    int rollNo[size];
    string studentName[size];
    float marks[size];
    for ( int i = 0 ; i < size; i++) {

        CLRSCR;
        cout << "Record # " << i + 1 << endl;
        cout <<"Enter Roll # ";
        cin >> rollNo[i];
        cout <<"Enter Name ";
        cin >> studentName[i];
        cout <<"Enter Marks ";
        cin >> marks[i];


    }
    cout <<"ROll #     " << "Name          " << "Marks" << endl;
    for ( int j = 0 ; j < size; j++) {
        cout << rollNo[j] << "          ";
        cout << studentName[j] << "          ";
        cout << marks[j]<< endl;
    }
    return 0;
}




