
#include <iostream>
using namespace std;
void sort(int arr[]) {
    
    int size = 10;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                swap(arr[j], arr[j+1]);
            }
        }

    }
}
void swap(int *x, int *y) {
    int t = *x;
    *x  = *y;
    *y = t; 
}
void sort(int *arr, int size) {
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (*(arr + j) > *(arr + j+1)) {
                swap((arr +j), (arr + j + 1)); 
                
            }
        }

    }
}


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

    sort(arr,10);

    for ( int i = 0 ; i < 10; i++) {
        cout << arr[i] << endl;


    }
    return 0;
}





