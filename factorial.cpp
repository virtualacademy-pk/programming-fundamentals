#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number : ";
    cin >> n;

    int i =1;
    int fact = 1;

        while (i <= n) {
            fact = fact * i;
            i++;
        }

        cout<<"Factorial of " << n << " is " <<fact;



    return 0;
}
