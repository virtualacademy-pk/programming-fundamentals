
#include <iostream>
using namespace std;
int balance = 100;
void openAccount(int money) {
    balance = money;
}

void  deposit(int money) {
    balance += money;
}


void  withdraw(int money) {
    balance -= money;
} 

int getBalance() {
    return balance;
}
int main()
{ 
    
     openAccount(100);
    cout << "Total Balance : " << getBalance()<<endl;
    deposit(500);
    cout << " New balance after deposit is : " << getBalance()<<endl;
    withdraw(200);
    
    cout << " New balance after withdraw is : " << getBalance()<<endl;
    
    return 0;
}





