
#include <iostream>
using namespace std;

int main()
{
    
    int row = 2;
    int col = 2;
     int a[row][col], b[row][col], sum[row][col];
     a[0][0] = 1;
     a[0][1] = 3;
     a[1][0] = 5;
     a[1][1] = 7;
      
     b[0][0] = 2;
     b[0][1] = 4;
     b[1][0] = 6;
     b[1][1] = 8;
       
     sum[0][0] = 0;
     sum[0][1] = 0;
     sum[1][0] = 0;
     sum[1][1] = 0;
      
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            sum[i][j] = a[i][j] + b[i][j]; {
                
            }
        }
    }

    // Displaying the addition of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < row; ++i) {
    for(int j = 0; j < col; ++j)
    {
        cout << " " << sum[i][j];
        if(j == col-1) {
            cout << endl;
        }
    }
    }

    return 0;
}


