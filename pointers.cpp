
#include <iostream>
#include <string.h>
using namespace std;

    int *fun()
    {
        // x is local variable and goes out of
        // scope after an execution of fun() is
        // over.
        int x = 5;

        return &x;
    }

    int main()
    {
        int *ptr = fun();
        cout << *ptr << endl;
        cout <<"Program end...";

        return 0;
    }




