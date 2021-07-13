#include <iostream>

using namespace std;

int main() {
    int oldNum, newNum, fibNum, maxNum;

    cout << "Enter number: ";
    cin >> maxNum;

    oldNum = 0;
    newNum = 1;
    fibNum = oldNum + newNum;

    cout << "\nFibonacci Series: " << oldNum << " " << newNum;

    while (fibNum <= maxNum) {
        cout << " " << fibNum;
        oldNum = newNum;
        newNum = fibNum;
        fibNum = oldNum + newNum;
    }

    cout << "\n";
    return 0;

}
