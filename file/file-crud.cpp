#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include "product.cpp"
using namespace std;

static Product data[1000];
static int CURRENT = 0;

void insert(Product product) {
    data[CURRENT++] = product;
}

//******************************************************************************

void viewProducts() {
    cout << "Product Id\t Product Name \t Price"<<endl;
    for ( int i = 0 ; i < CURRENT; i++) {
        cout << data[i].productId <<"\t\t\t" << data[i].productName <<"\t\t\t" << data[i].price <<endl;

    }
}

//*****************************************************************************
Product searchProduct(int productId) {
    Product search;
    for ( int i = 0 ; i < CURRENT; i++) {
        if (data[i].productId == productId) {
            search = data[i];
            break;
        }
    }
    return search;
}

//******************************************************************************
int flag = 0;

void deleteProduct(int productId) {

        int pos;
        for ( int i = 0 ; i < CURRENT; i++) {
            if (data[i].productId == productId) {
                pos = i;
                break;
            }
        }
        for ( int i = pos ; i < CURRENT; i++) {
            data[i] = data[i + 1];
        }
        CURRENT -= 1;



}

//------------------
int updateProduct(int productId, Product product) {
    int updated = 0;
     for ( int i = 0 ; i < CURRENT; i++) {
        if (data[i].productId == productId) {
           data[i] = product;
            updated =  1;
            break;
        }
    }
 return updated;
}

//*****************************************************************************

//*****************************************************************************


int main() {
    char path[] = "Ramadan.text";
    int choice = 10;
    while (1) {

        while (choice == 10) {
            cout << "\t\t\t************************" << endl;
            cout << "\t\t\t1 To Insert press" << endl;
            cout << "\t\t\t2 To view" << endl;
            cout << "\t\t\t3 To search" << endl;
            cout << "\t\t\t4 To Delete" << endl;
            cout << "\t\t\t5 To Update" << endl;
            cout << "\t\t\t0 To Exit" << endl;
            cout << "\t\t\t************************" << endl;
            cout << "Your Choice : ";
            cin >> choice;

            while (choice == 1) {
                Product product;
                cin >> product;
                insert(product);
                cout << "\t\t\t************************" << endl;
                cout << "\t\t\t1 More Products" << endl;
                cout << "\t\t\t0 Exit" << endl;
                cout << "\t\t\t10 Main Menu" << endl;
                cout << "\t\t\t************************" << endl;
                cout << "Your Choice : ";
                cin >> choice;

            }
            while (choice == 2) {
                viewProducts();
                cout << "\t\t\t************************" << endl;

                cout << "\t\t\t0 Exit" << endl;
                cout << "\t\t\t10 Main Menu" << endl;
                cout << "\t\t\t************************" << endl;
                cout << "Your Choice : ";
                cin >> choice;
            }
            while (choice == 4) {
                int productId;
                cout<<"Enter Product Id to delete: ";
                cin >> productId;
                cin.ignore();
                deleteProduct(productId);
                cout << "\t\t\t************************" << endl;

                cout << "\t\t\t4 Search More Products" << endl;
                cout << "\t\t\t0 Exit" << endl;
                cout << "\t\t\t10 Main Menu" << endl;
                cout << "\t\t\t************************" << endl;
                cout << "Your Choice : ";
                cin >> choice;
            }
            while (choice == 3) {
                int productId;
                cout<<"Enter Product Id to serach: ";
                cin >> productId;
                Product product = searchProduct(productId);
                cout << product;
                cout << "\t\t\t************************" << endl;

                cout << "\t\t\t3 Search More Products" << endl;
                cout << "\t\t\t0 Exit" << endl;
                cout << "\t\t\t10 Main Menu" << endl;
                cout << "\t\t\t************************" << endl;
                cout << "Your Choice : ";
                cin >> choice;
            }
            while (choice == 5) {
                int productId;
                cout<<"Enter Product Id to Update: ";
                cin >> productId;
                Product product = searchProduct(productId);
                if (product.productId > 0) {
                    cout <<"You are going to upate following product: " << endl;
                    cout << product;
                    cin >> product;
                    updateProduct(productId, product);
                    cout <<"Product Update Successfully...." << endl;
                }
                cout << "\t\t\t5 Update More Products" << endl;
                cout << "\t\t\t0 Exit" << endl;
                cout << "\t\t\t10 Main Menu" << endl;
                cout << "\t\t\t************************" << endl;
                cout << "Your Choice : ";
                cin >> choice;
            }
        }
        if (choice == 0)break;

    }


    return 0;
}