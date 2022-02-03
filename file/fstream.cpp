#include <iostream>
#include <fstream>
using namespace std;
int main() {

    char name[50];
    char sal[10];
    char dept[30]; // used to read dept
    fstream stream;
    char fileName[] = "myfile.txt";
    stream.open (fileName, ios::in | ios:: out | ios:: app );

    // checking that file is successfully opened or not
    if (!stream) {
        cout << "Can't open input file named " << fileName << endl;
        exit(1);
    }
//    stream << " more lorem ipsum";

    // Readin
    while (!stream.eof()) {
        stream >> name ;
        cout << name<< endl;
    }
   /* string srg;
    cout<<"Reading "<<endl;
    while ( getline (stream ,srg) )
    {
        cout<<"Reading "<<endl;
        cout << srg <<endl;
    }*/
    stream.close();
return 1;
}