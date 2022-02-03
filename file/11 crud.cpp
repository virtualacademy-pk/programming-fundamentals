#include<iostream>
#include<string>
#include<cstring>
#include<fstream>

using namespace std;

class Inventory {
public:
    char *productId;
    char *productName;
    char *price;
};
Inventory getInventoryItem(string line) {
    Inventory s;
    char *cstr ;
    cstr = new char[line.length() + 1];

    strcpy(cstr, line.c_str());
    s.productId = strtok(cstr, "|");
    s.productName = strtok(NULL, "|");
    s.price = strtok(NULL, "|");

    return s;
}
//*****************************************************************************
void insert() {
    cout << "\t*******************************************************************" << endl;
    char id[5];

    char includedId[5];
    int flag = 0;
    Inventory d;


    fstream myfile;
    myfile.open("crud.txt", ios::out | ios::app);
    cout << endl;
    cout << "Enter Product ID : ";
    cin >> id;

    fstream myfile2;
    myfile2.open("crud.txt", ios::in);
    while (!myfile2.eof()) {
        string line;
        getline (myfile2, line );
        if (line.length() > 0) {
            d = getInventoryItem(line);

            if (strcmp(id, d.productId) == 0) {
                flag = 1;

                myfile2.close();
                break;
            }
        }
    }
    if (flag == 1) {
        cout << "******************************************************************" << endl;
        cout << "This id already included by the file change id" << endl;
        cout << "******************************************************************" << endl;

        cout << "Enter Product ID : ";
        cin >> id;
        flag = 0;
    }


    cout << endl << "Enter Product Name : ";
    cin >> d.productName;
    cout << endl << "Enter Product Ammount : ";

    cin >> d.price;
    cout << endl << "Enter Product Shelf : ";

    myfile << id << "|" << d.productName << "|"  << d.price << "\n";


    myfile.close();
}

//******************************************************************************

void view() {
    cout << "\t*******************************************************************" << endl;
    Inventory s;
    ifstream file1;
    file1.open("crud.txt");

    while (!file1.eof()) {
        string line;
        getline (file1, line );
        if (line.length() > 0) {
            s = getInventoryItem(line);

            cout << "ID:(" << s.productId << ")=Product name:(" << s.productName << ")=Product Price:(" << s.price
                 << ")" << endl;
        }
    }

    file1.close();
}

//*****************************************************************************
void search() {
    cout << "\t*******************************************************************" << endl;
    Inventory s;
    char ser[10];
    char ch[10];
    int choise;
    int found = 0;
    cout << "\t\t\t*************************" << endl;
    cout << "\t\t\t* To search by id--->(1)*" << endl;
    cout << "\t\t\t* To Search by name->(2)*" << endl;
    cout << "\t\t\t*************************" << endl;
    cout << "Enter your choise : ";
    cin >> choise;
    if (choise == 1) {
        cout << "Enter the id : ";
        cin >> ch;
    } else if (choise == 2) {
        cout << "Enter the name : ";
        cin >> ch;
    }


    fstream myfile;
    myfile.open("crud.txt", ios::in);
    while (!myfile.eof()) {
        string line;
        getline (myfile, line );
        if (line.length() > 0) {
            s = getInventoryItem(line);

            if (choise == 1) {
                if (strcmp(ch, s.productId) == 0) {
                    cout << "Found and his record is " << endl;
                    cout << s.productId << " " << s.productName  << " " << s.price << " "<< " " << endl;
                    found = 1;
                }
            } else if (choise == 2) {
                if (strcmp(ch, s.productName) == 0) {
                    cout << "Found and his record is " << endl;
                    cout << s.productId << "|" << s.productName << " " << s.price << " " << endl;
                    found = 1;
                }
            }
        }



    }
    if (found == 0)
        cout << "Record not found";
    myfile.close();
    cout << endl;
}

//******************************************************************************
int flag = 0;

void del() {
    cout << "\t*******************************************************************" << endl;
    int way;
    int u = 0;

    char name[20];
    char id[4];




        cout << "enter product id to delete : ";
        cin >> id;

    Inventory s;
    fstream crudReadFile;
    fstream mymyfile;
    crudRead.open("crud.txt", ios::in);//read
    mymyfile.open("Temp.txt", ios::out);//write
    flag = 0;
    while (!myfile.eof()) {
        string line;
        getline (myfile, line );

        if (line.length() > 0) {
            s = getInventoryItem(line);
            if ( strcmp(id, s.productId) == 0) {
                cout << "Below is record " << endl;
                cout << s.productId << "|" << s.productName << " " << s.price << " " << endl;

                    flag = 1;

            } else {
                crudRead << s.productId << "|" << s.productName << "|" << s.price << "\n";
            }
        }

    }
    myfile.close();
    mymyfile.close();
    remove("crud.txt");
    rename("Temp.txt", "crud.txt");
    if (flag == 0) { cout << "Not found" << endl; }

}

//------------------
void update() {
    cout << "\t*******************************************************************" << endl;
    int h = 0;
    Inventory s;
    char comp[10];
    char ch[10];
    int x;
    cout << "To Update Name press 1 :";
    cin >> x;
    if (x == 1) {
        cout << "Enter the the name : ";
        cin >> comp;
        cout << "Enter the new : ";
        cin >> ch;
    }
    fstream myfile, mymyfile;
    myfile.open("Temp.txt", ios::out);//write
    mymyfile.open("crud.txt", ios::in);//read
    while (!mymyfile.eof()) {
        string line;
        getline (mymyfile, line );

        if (line.length() > 0) {
            s = getInventoryItem(line);
            if (strcmp(id, s.productId) == 0) {

            }
        }
        /*mymyfile.getline(s.productId, 4, '|');
        mymyfile.getline(s.productName, 4, '|');
        mymyfile.getline(s.price, 11, '|');
        if (strcmp(comp, s.productName) != 0) {
            myfile << s.productId << "|" << s.productName << "|" << s.price  << "\n";

        } else if (strcmp(comp, s.productName) == 0) {
            h++;
            char k;
            if (h > 0) {
                cout << "is that record you want to update" << endl;
                cout << s.productId << "|" << s.productName << "|"  << s.price << "\n";

                cout << " y-n";
                cin >> k;
            }
            if (k == 'y') {

                myfile << ch << "|" << s.price << "\n";
            }
        }*/

    }

    myfile.close();
    mymyfile.close();
    remove("crud.txt");
    rename("Temp.txt", "crud.txt");

}

//*****************************************************************************

//*****************************************************************************


int main() {
    char path[] = "Ramadan.text";
    int f = 10;
    for (;;) {

        while (f == 10) {
            cout << "\t\t\t************************" << endl;
            cout << "\t\t\t1 To Insert press" << endl;
            cout << "\t\t\t2 To view" << endl;
            cout << "\t\t\t3 To search" << endl;
            cout << "\t\t\t4 To Delete" << endl;
            cout << "\t\t\t5 To Update ------> (5)*" << endl;
            cout << "\t\t\t6 To Exit --------> (0)*" << endl;
            cout << "\t\t\t************************" << endl;
            cout << "Your Choise : ";
            cin >> f;

            while (f == 1) {
                insert();
                cout << "Continue insert press-->(1) *** (0) to exit *** (10) to restart : ";
                cin >> f;

            }
            while (f == 2) {
                view();
                cout << endl;
                cout << "To continue (9) *** To exit (0) *** (10) to restart : ";
                cin >> f;
            }
            while (f == 4) {
                del();

                cout << "To continue (9) *** To exit (0) *** (10) to restart : ";
                cin >> f;
            }
            while (f == 3) {
                search();
                cout << "To continue (9) *** To exit (0) *** (10) to restart : ";
                cin >> f;
            }
            while (f == 5) {
                update();
                cout << "To continue (9) *** To exit (0) *** (10) to restart : ";
                cin >> f;
            }
        }
        if (f == 0)break;

    }


    return 0;
}