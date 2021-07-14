
#include <iostream>
using namespace std;

int main()
{
    
    int row = 2;
    int col = 2;
     int a[row][col], b[row][col], mult[row][col];
     a[0][0] = 1;
     a[0][1] = 3;
     a[1][0] = 5;
     a[1][1] = 7;
      
     b[0][0] = 2;
     b[0][1] = 4;
     b[1][0] = 6;
     b[1][1] = 8;
       
     mult[0][0] = 0;
     mult[0][1] = 0;
     mult[1][0] = 0;
     mult[1][1] = 0;
      
    // Multiplying matrix a and b and storing in array mult.
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            for(int k = 0; k < col; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < row; ++i) {
    for(int j = 0; j < col; ++j)
    {
        cout << " " << mult[i][j];
        if(j == col-1) {
            cout << endl;
        }
    }
    }

    return 0;
}


