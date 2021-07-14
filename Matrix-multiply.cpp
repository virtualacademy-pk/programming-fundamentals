
#include <iostream>
using namespace std;

int main()
{
    
    int row = 2;
    int col = 2;
     int a[row][col], b[row][col], mult[row][col];
     
    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }
 
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
        {
            mult[i][j]=0;
        }

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


