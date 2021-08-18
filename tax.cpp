#include <iostream>

using namespace std;

int main() {
    float tax = 0.0;
    float salary = 1200000;
    cout << "Enter your annual salary ";
   cin >> salary;
    if (salary <= 600000) {
        tax = 0.0;
    } else if (salary <= 1200000) {
        cout << "I am here";
        tax = ((salary - 600000) * (5 / 100.0));
    } else if (salary <= 1800000) {
        tax = 30000 + ((salary - 1200000) * (10 / 100.0));
    } else if (salary <= 2500000) {
        tax = 90000 + ((salary - 1800000) * (15 / 100.0));
    } else if (salary <= 3500000) {
        tax = 195000 + ((salary - 12500000) * (17.50 / 100.0));
    } else if (salary <= 5000000) {
        tax = 370000 + ((salary - 2000000) * (20 / 100.0));
    } else if (salary <= 8000000) {
        tax = 670000 + ((salary - 5000000) * (22.50 / 100.0));
    } else if (salary <= 12000000) {
        tax = 1345000 + ((salary - 8000000) * (25 / 100.0));
    } else if (salary <= 30000000) {
        tax = 2345000 + ((salary - 12000000) * (27.50 / 100.0));
    } else if (salary <= 5000000) {
        tax = 7295000 + ((salary - 30000000) * (30 / 100.0));
    } else if (salary <= 7500000) {
        tax = 13295000 + ((salary - 50000000) * (32.50 / 100.0));
    } else {
        tax = 21420000 + ((salary - 75000000) * (35 / 100.0));
    }

    cout << "Applicable tax is   " << tax;
    return 0;
}
