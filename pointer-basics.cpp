
#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int i = 2;
    int *ptr;
    int *arptr;
    ptr = &i;
    cout<< ptr <<endl;

    cout << "Value at pointer " << *ptr <<endl;
    *ptr =323;

    cout <<"Value of i is " << i <<endl;
    int ar[] = {4,6,23,54};
    ptr = ar;
cout<< " Array pointer"<<endl;
    cout<< *ptr <<endl;
    ptr++;
    cout<< *ptr <<endl;
    return 0;
}




