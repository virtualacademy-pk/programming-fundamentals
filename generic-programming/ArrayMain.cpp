#include <iostream>
#include "string.h"
#include "ArrayTemplateSpecialization.cpp"
using namespace std;
 int main( )
{
 	Array<float,5> a ;

	a.insert ( 0,11.0 ) ;
	a.insert ( 1,12.6 ) ;
	a.insert ( 2,13.7 ) ;
	a.insert ( 3,14.4 ) ;
	a.insert ( 4,15.3 ) ;

	std::cout << "\nElements of Array: " ;
	a.display( ) ;
     
   return 0;
}

