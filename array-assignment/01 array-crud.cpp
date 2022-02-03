#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include "product.cpp"
using namespace std;

static Product data[1000];
static int CURRENT = 0;

void insert(Product product) {

}

//******************************************************************************

void viewProducts() {

}

//*****************************************************************************
Product searchProduct(int productId) {
    Product search;

    return search;
}

//******************************************************************************


void deleteProduct(int productId) {





}

//------------------
int updateProduct(int productId, Product product) {

 return 0;
}

//*****************************************************************************

//*****************************************************************************


int main() {
    char path[] = "Ramadan.text";
    int choice = 10;
    while (1) {

        while (choice == 10) {
            cout << "\t\t\t************************" << endl;
            cout << "\t\t\t1 To Insert " << endl;
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

                cout << "\t\t\t4 Delete More Products" << endl;
                cout << "\t\t\t0 Exit" << endl;
                cout << "\t\t\t10 Main Menu" << endl;
                cout << "\t\t\t************************" << endl;
                cout << "Your Choice : ";
                cin >> choice;
            }
            while (choice == 3) {
                int productId;
                cout<<"Enter Product Id to search: ";
                cin >> productId;
                Product product = searchProduct(productId);
                if (product.productId > 0) {
                    cout << product;
                } else {
                    cout << "No product found" << endl;
                }
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