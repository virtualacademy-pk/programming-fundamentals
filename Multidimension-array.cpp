
#include <iostream>
using namespace std;

int main()
{
    
    int x[3][2];
    x[0][0] = 89;
    x[0][1] = 80;

    x[1][0] = 92;
    x[1][1] = 71;

    x[2][0] = 209;
    x[2][1] = 78;

    //int x[3][2] = {{0,1}, {2,3}, {4,5}};
  
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "x[" << i<< "][" << j << "]: ";
            cin >> x[i][j];
        }
    } 
    
    cout<<"Print array";
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i<< "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    } 
    return 0;
}


