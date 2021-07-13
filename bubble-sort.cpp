
#include <iostream>
using namespace std;
int main()
{
    int size = 10;

    int arr[size];
    arr[0] = 91;
    arr[1] = 5;
    arr[2] = 36;
    arr[3] = 15;
    arr[4] = 976;
    arr[5] = 13;
    arr[6] = 78;
    arr[7] = 45;
    arr[8] = 1;
    arr[9] = 34;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr [j + 1];
                arr[j + 1] = tmp;
            }
        }

        for ( int i = 0 ; i < 10; i++) {
            cout << arr[i] << ",";


        }
        cout << endl;
    }

    for ( int i = 0 ; i < 10; i++) {
        cout << arr[i] << endl;


    }
    return 0;
}





