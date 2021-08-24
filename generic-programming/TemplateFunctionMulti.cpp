#include <iostream>
#include "string.h"
#include "Array.cpp"
using namespace std;
template< typename T, typename U >
T my_cast( U u ) {
	return (T)u;
}

int main() {
	char d = 10.5674;
	//int j = my_cast( d ); 	//Error
	int i = my_cast< int >( d );
	cout<<i;
	return 0;
}

