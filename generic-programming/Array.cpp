#include <iostream>

using namespace std;


const int MAX = 5 ;

class Array
{
private :

    int *arr ;
    int size ;

public :

    Array(){
        arr = new int[MAX] ;
        size =0;
    }

// inserts an element num at given position pos
void insert ( int pos, int num )
{
    // shift elements to right
    for ( int i = MAX - 1 ; i >= pos ; i-- ){

        arr[i] = arr[i - 1] ;
        arr[i] = num ;
    }
}

// deletes an element from the given position pos
void  del ( int pos )
{
    // skip to the desired position
    for ( int i = pos ; i < MAX ; i++ ) {
        arr[i - 1] = arr[i] ;
        arr[i - 1] = 0 ;
    }
}

// reverses the entire Array
void  reverse( )
{
    for ( int i = 0 ; i < MAX / 2 ; i++ )
    {
        int temp = arr[i] ;
        arr[i] = arr[MAX - 1 - i] ;
        arr[MAX - 1 - i] = temp ;
    }
}

// searches Array for a given element num
void  search ( int num )
{
    // Traverse the Array
    for ( int i = 0 ; i < MAX ; i++ )
    {
        if ( arr[i] == num )
        {
            std::cout << "\n\nThe element " << num << " is present at "<< ( i + 1 ) << "th position" ;
            return ;
        }


        if ( i == MAX )
            std::cout << "\n\nThe element " << num << " is not present in the Array" ;
    }
}

// displays the contents of a Array
void  display( )
{
    std::cout<< std::endl ;
    // traverse the entire Array
    for ( int i = 0 ; i < MAX ; i++ )
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
    Array a ;

    a.insert ( 1,11 ) ;
    a.insert ( 2,12 ) ;
    a.insert ( 3,13 ) ;
    a.insert ( 4,14 ) ;
    a.insert ( 5,15 ) ;

    std::cout << "\nElements of Array: " ;
    a.display( ) ;

    a.del ( 5 ) ;
    a.del ( 2 ) ;
    std::cout << "\n\nAfter deletion: " ;
    a.display( ) ;

    a.insert ( 2, 222 ) ;
    a.insert ( 5, 555 ) ;
    std::cout << "\n\nAfter insertion: " ;
    a.display( ) ;

    a.reverse( ) ;
    std::cout << "\n\nAfter reversing: " ;
    a.display( ) ;

    a.search ( 222 ) ;
    a.search ( 666 ) ;
    return 1;
}*/

