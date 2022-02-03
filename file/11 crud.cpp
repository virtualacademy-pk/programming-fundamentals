#include<iostream>
#include<string>
#include<cstring>
#include<fstream>

using namespace std;

class Inventory {
public:
    char productId[5];
    char productName[10];
    char amount[5];
    char price[10];
    char shelf[5];
};

//*****************************************************************************
void insert() {
    cout << "\t*******************************************************************" << endl;
    char id[5];

    char includedId[5];
    int flag = 0;
    Inventory d;


    fstream myfile;
    myfile.open("test.txt", ios::out | ios::app);
    cout << endl;
    cout << "Enter Prouduct ID : ";
    cin >> id;

    fstream myfile2;
    myfile2.open("test.txt", ios::in);
    while (!myfile2.eof()) {
        myfile2.getline(includedId, 4, '|');
        myfile2.getline(d.productName, 4, '|');
        myfile2.getline(d.amount, 8, '|');
        myfile2.getline(d.price, 11, '|');
        myfile2.getline(d.shelf, 11, '\n');;
        if (strcmp(id, includedId) == 0) {
            flag = 1;

            myfile2.close();
            break;
        }

    }
    if (flag == 1) {
        cout << "******************************************************************" << endl;
        cout << "This id already included by the file change id" << endl;
        cout << "******************************************************************" << endl;

        cout << "Enter Prouduct ID : ";
        cin >> id;
        flag = 0;
    }


    cout << endl << "Enter Prouduct Name : ";
    cin >> d.productName;
    cout << endl << "Enter Prouduct Ammount : ";
    cin >> d.amount;
    cout << endl << "Enter Prouduct Price : ";
    cin >> d.price;
    cout << endl << "Enter Prouduct Shelf : ";
    cin >> d.shelf;
    cout << endl;
    myfile << id << "|" << d.productName << "|" << d.amount << "|" << d.price << "|" << d.shelf << "\n";


    myfile.close();
}

//******************************************************************************
void view() {
    cout << "\t*******************************************************************" << endl;
    Inventory s;
    fstream file1;
    file1.open("test.txt", ios::in);

    while (!file1.eof()) {
        file1.getline(s.productId, 4, '|');
        file1.getline(s.productName, 4, '|');
        file1.getline(s.amount, 8, '|');
        file1.getline(s.price, 11, '|');
        file1.getline(s.shelf, 11, '\n');;


        cout << "ID:(" << s.productId << ")=Prouduct name:(" << s.productName << ")=Prouduct ammount:(" << s.amount
             << ")=Prouduct Price:(" << s.price << ")=Prouduct shelf :(" << s.shelf << ")" << endl;
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
    myfile.open("test.txt", ios::in);
    while (!myfile.eof()) {
        myfile.getline(s.productId, 4, '|');
        myfile.getline(s.productName, 4, '|');
        myfile.getline(s.amount, 4, '|');
        myfile.getline(s.price, 4, '|');
        myfile.getline(s.shelf, 4, '\n');
        if (choise == 1) {
            if (strcmp(ch, s.productId) == 0) {
                cout << "Found and his record is " << endl;
                cout << s.productId << " " << s.productName << " " << s.amount << " " << s.price << " " << s.shelf
                     << " " << endl;
                found = 1;
            }
        } else if (choise == 2) {
            if (strcmp(ch, s.productName) == 0) {
                cout << "Found and his record is " << endl;
                cout << s.productId << "|" << s.productName << " " << s.amount << " " << s.price << " " << s.shelf
                     << " " << endl;
                found = 1;
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
    char id[5];
    char ee[1];

    cout << "\t\t\t****************************" << endl;
    cout << "\t\t\t* delete by id press--->(1)*" << endl;
    cout << "\t\t\t* delete by name press->(2)*" << endl;
    cout << "\t\t\t****************************" << endl;
    cout << "Enter your choise : ";
    cin >> way;
    if (way == 1) {
        cout << "enter product id to delete : ";
        cin >> id;
    } else if (way == 2) {
        cout << "enter product name to delete : ";
        cin >> name;
    }
    Inventory s;
    fstream myfile;
    fstream mymyfile;
    myfile.open("test.txt", ios::in);//read
    mymyfile.open("Temp.txt", ios::out);//write

    while (!myfile.eof()) {
        myfile.getline(s.productId, 4, '|');
        myfile.getline(s.productName, 5, '|');
        myfile.getline(s.amount, 9, '|');
        myfile.getline(s.price, 12, '|');
        myfile.getline(s.shelf, 12, '\n');

        if (way == 1 && strcmp(id, s.productId) != 0 && strcmp(ee, s.productId) != 0) {
            {

                mymyfile << s.productId << "|" << s.productName << "|" << s.amount << "|" << s.price << "|" << s.shelf
                         << "\n";

            }
            if (strcmp(id, s.productId) == 0) {
                flag = 1;
            }
        } else if (way == 2 && strcmp(name, s.productName) != 0 && strcmp(ee, s.productName) != 0) {
            {

                mymyfile << s.productId << "|" << s.productName << "|" << s.amount << "|" << s.price << "|" << s.shelf
                         << "\n";

            }
            if (strcmp(name, s.productName) == 0) {
                flag = 1;
            }
        }

    }
    myfile.close();
    mymyfile.close();
    remove("test.txt");
    rename("Temp.txt", "test.txt");
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
    mymyfile.open("test.txt", ios::in);//read
    while (!mymyfile.eof()) {
        mymyfile.getline(s.productId, 4, '|');
        mymyfile.getline(s.productName, 4, '|');
        mymyfile.getline(s.amount, 8, '|');
        mymyfile.getline(s.price, 11, '|');
        mymyfile.getline(s.shelf, 11, '\n');
        if (strcmp(comp, s.productName) != 0) {
            myfile << s.productId << "|" << s.productName << "|" << s.amount << "|" << s.price << "|" << s.shelf
                   << "\n";

        } else if (strcmp(comp, s.productName) == 0) {
            h++;
            char k;
            if (h > 0) {
                cout << "is that record you want to update" << endl;
                cout << s.productId << "|" << s.productName << "|" << s.amount << "|" << s.price << "|" << s.shelf
                     << "\n";

                cout << " y-n";
                cin >> k;
            }
            if (k == 'y') {

                myfile << ch << "|" << s.amount << "|" << s.price << "|" << s.shelf << "\n";
            }
        }

    }

    myfile.close();
    mymyfile.close();
    remove("test.txt");
    rename("Temp.txt", "test.txt");

}

//*****************************************************************************

//*****************************************************************************


int main() {
    char path[] = "Ramadan.text";
    int f = 10;
    for (;;) {

        while (f == 10) {
            cout << "\t\t\t************************" << endl;
            cout << "\t\t\t* To Insert press-> (1)*" << endl;
            cout << "\t\t\t* To view --------> (2)*" << endl;
            cout << "\t\t\t* To search ------> (3)*" << endl;
            cout << "\t\t\t* To Delete ------> (4)*" << endl;
            cout << "\t\t\t* To Update ------> (5)*" << endl;
            cout << "\t\t\t* To Exit --------> (0)*" << endl;
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