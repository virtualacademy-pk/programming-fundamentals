#include <iostream>
#include "string.h"
#include "Array.cpp"
using namespace std;
/*void printArray(int* array, int size)
{
	for ( int i = 0; i < size; i++ )
		cout << array[ i ] << ", ";
}*/
template< class T >
void print( T* array, int size )
{
	for ( int i = 0; i < size; i++ )
		cout << array[ i ] << ", "; // here data type of array is T
}
 
int max( int x, int  y ) {
	if( x > y){
		return x;
	}else{
		return y;
	}
}
template< class T >
T maxT( T x, T y ) {
		if( x > y){
		return x;
	}else{
		return y;
	}
}
int main( )
{
	//cout<<maxT(16.6,7.8)<<endl;
	//cout<<maxT(17,4);
//cout<<maxT(7.2,42.7);
	int *arr = new int[5] ;
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	print(arr,5);
	cout<<endl;
	char *ch = new char[5] ;
	ch[0] = 'a';
	ch[1] = 'b';
	ch[2] = 'c';
	ch[3] = 'd';
	ch[4] = 'e';
	print(ch,5);
	cout<<endl;
	 
	 
   return 0;
}

