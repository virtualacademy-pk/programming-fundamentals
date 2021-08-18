
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int ar[10] = {7,4,2,1,23,54,76,23,77,34};
    int *ptr = ar;
    int i = 0;
    while(i <= 9) {
        cout << *ptr << endl;
        ptr++;
        i++;
    }
    return 0;
}




