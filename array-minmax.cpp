
#include <iostream>
using namespace std;
int main()
{

    int arr[10];
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
    int max = arr[0];
    int min = arr[0];


    for ( int i = 1 ; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }


    }
    cout <<" Maximum value in array is " << max << endl;
    cout <<" Minimum value in array is " << min << endl;
    return 0;
}




