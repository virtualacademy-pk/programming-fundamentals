#include <iostream>
#include "ArrayTemplate.cpp"

using namespace std;


 
template <>
class Array<int>
{
private :

    int *arr ;
    int size ;

public :
	
    Array<int>(){
        arr = new int[SIZE] ;
        size =0;
    }

// inserts an element num at given position pos
void insert ( int pos, int num )
{
	cout<<"Temlate Specilize function for insert"<<endl;
    // shift elements to right
    for ( int i = SIZE - 1 ; i >= pos ; i-- ){

        arr[i] = arr[i - 1] ;
        arr[i] = num ;
    }
}
  
// deletes an element from the given position pos
void  del ( int pos )
{
    // skip to the desired position
    for ( int i = pos ; i < SIZE ; i++ ) {
        arr[i - 1] = arr[i] ;
        arr[i - 1] = 0 ;
    }
}

// reverses the entire Array
void  reverse( )
{
    for ( int i = 0 ; i < SIZE / 2 ; i++ )
    {
        int temp = arr[i] ;
        arr[i] = arr[SIZE - 1 - i] ;
        arr[SIZE - 1 - i] = temp ;
    }
}

// searches Array for a given element num
void  search ( int num )
{
    // Traverse the Array
    for ( int i = 0 ; i < SIZE ; i++ )
    {
        if ( arr[i] == num )
        {
            std::cout << "\n\nThe element " << num << " is present at "<< ( i + 1 ) << "th position" ;
            return ;
        }


        if ( i == SIZE )
            std::cout << "\n\nThe element " << num << " is not present in the Array" ;
    }
}

// displays the contents of a Array
void  display( )
{
    std::cout<< std::endl ;
    // traverse the entire Array
    for ( int i = 0 ; i < SIZE ; i++ )
        std::cout << "  " << arr[i] ;
}
void  merge ( Array &a, Array &b )
{
    int i, k, j ;
    size = a.size + b.size ;

    arr = new int[size] ;

    for ( k = 0, j = 0, i = 0 ; i <= size ; i++ )
    {
        if ( a.arr[k] < b.arr[j] )
        {
            arr[i] = a.arr[k] ;
            k++ ;
            if ( k >= a.size )
            {
                for ( i++ ; j < b.size ; j++, i++ )
                    arr[i] = b.arr[j] ;
            }
        }
        else
        {
            arr[i] = b.arr[j] ;
            j++ ;
            if ( j >= b.size )
            {
                for ( i++ ; k < a.size ; k++, i++ )
                    arr[i] = a.arr[k] ;
            }
        }
    }
}
} ;
/*int main( )
{
    Array<int> a ;

    a.insert ( 0,11 ) ;
    a.insert ( 1,12 ) ;
    a.insert ( 2,13 ) ;
    a.insert ( 3,14 ) ;
    a.insert ( 4,15 ) ;

    std::cout << "\nElements of Array: " ;
    a.display( ) ;

Array<float> b ;

    b.insert ( 0,11.5 ) ;
    b.insert ( 1,12.8 ) ;
    b.insert ( 2,13.3 ) ;
    b.insert ( 3,14.2 ) ;
    b.insert ( 4,15.7 ) ;

    std::cout << "\nElements of Array: " ;
    b.display( ) ;
     
    return 1;
}
*/
