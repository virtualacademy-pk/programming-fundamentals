#include <iostream>
#include "string.h"
#include "Array.cpp"
using namespace std;
template< class T >
void print( T* array, int size )
{
	cout<<"Printing Generic Array"<<endl;
	for ( int i = 0; i < size; i++ ){
		cout << array[ i ] << "- "; // here data type of array is T
	}
	cout<<endl;
}

template<>
void print( char* array, int size )
{
	cout<<"Printing Character Array"<<endl;
	for ( int i = 0; i < size; i++ )
		cout << array[ i ] << ", "; // here data type of array is char*
} 
 int main( )
{
 	int *arr = new int[5] ;
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	print(arr,5);
	char *ch = new char[5] ;
	cout<<endl;
	ch[0] = 'a';
	ch[1] = 'b';
	ch[2] = 'c';
	ch[3] = 'd';
	ch[4] = 'e';
	print(ch,5);
	cout<<endl;
	 
	 
   return 0;
}

