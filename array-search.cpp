
#include <iostream>
using namespace std;
int main()
{

    int arr[10];
    arr[0] = 91;
    arr[1] = 5;
    arr[2] = 36;
    arr[3] = 15;
    arr[4] = 9;
    arr[5] = 13;
    arr[6] = 78;
    arr[7] = 45;
    arr[8] = 1;
    arr[9] = 34;
    int search ;
    int location = -1;
    cout <<"Enter value to search: ";
    cin >> search;

    for ( int i = 0 ; i < 10; i++) {
        if (arr[i] == search) {
            location = i;
            break;
        }

    }

    if (location > -1) {
        cout <<"Element found at location " << location;
    } else {
        cout <<"No Element found at any location";
    }
    return 0;
}




