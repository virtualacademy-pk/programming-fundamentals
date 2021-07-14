
#include <iostream>
using namespace std;

int main()
{
    
    int row = 3;
    int col = 2;
    int tRow = 2;
    int tCol = 3;
     int a[row][col], transpose[tRow][tCol];
     a[0][0] = 1;
     a[0][1] = 3;
     
     a[1][0] = 5;
     a[1][1] = 7;
     a[2][0] = 9;
     a[2][1] = 11;
     
      
    // Displaying the addition of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j)
        {
            cout << " " << a[i][j];
            if(j == col-1) {
                cout << endl;
            }
        }
    }
    for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         transpose[j][i] = a[i][j];
      }
    }
    
    cout << "Transpose of Matrix: " << endl;
   for (int i = 0; i < tRow; ++i)
      for (int j = 0; j < tCol; ++j) {
         cout << " " << transpose[i][j];
         if (j == tCol - 1)
            cout << endl;
      }
    return 0;
}



