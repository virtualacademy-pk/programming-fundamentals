
#include <iostream>
using namespace std;
 
void transaction(int money, char transactionType) {
    static int balance = 0;
    if (transactionType == 'O') { // Open account
        balance = money;        
    }else  if (transactionType == 'D') { // deposit account
        balance += money;        
    }else  if (transactionType == 'W') { // withdraw account
        balance -= money;        
    }
     cout << "Total Balance : " << balance<<endl;
}
int main()
{
    transaction(100, 'O');
    transaction(500, 'D');
    transaction(200, 'W');
    transaction(5000, 'D');
    
    transaction(2000, 'W');
  
    return 0;
}





