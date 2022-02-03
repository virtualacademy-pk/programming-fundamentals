#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include "product.cpp"
using namespace std;
static string dataFile = "crud.txt";


Product readProductFromFile(string line) {
    Product product;
    char *cstr ;
    cstr = new char[line.length() + 1];

    strcpy(cstr, line.c_str());
    product.productId = atoi(strtok(cstr, ","));
    product.productName = strtok(NULL, ",");
    product.price = atoi(strtok(NULL, ","));

    return product;
}

void insert(Product product) {
    fstream fileWriter;
    fileWriter.open(dataFile, ios::out | ios::app);
    fileWriter << product.productId << "," << product.productName << ","  << product.price << "\n";
    fileWriter.close();
}
//******************************************************************************

void viewProducts() {
    cout << "Product Id\t Product Name \t Price"<<endl;
    Product product;
    ifstream fileReader;
    fileReader.open(dataFile);
    while (!fileReader.eof()) {
        string line;
        getline (fileReader, line );
        if (line.length() > 0) {
            product = readProductFromFile(line);
            cout << product.productId <<"\t\t\t" << product.productName <<"\t\t\t" << product.price <<endl;
        }
    }
    fileReader.close();
}

//*****************************************************************************
Product searchProduct(int productId) {
    Product product;
    Product searched;
    searched.productId = 0;

    ifstream fileReader;
    fileReader.open(dataFile);
    while (!fileReader.eof()) {
        string line;
        getline (fileReader, line );
        if (line.length() > 0) {
            product = readProductFromFile(line);
            if (product.productId == productId) {
                searched = product;
                break;
            }

        }
    }
    fileReader.close();
    return searched;
}

//******************************************************************************
int flag = 0;

int deleteProduct(int productId) {

    int updated = 0;
    Product product;
    int deleted = 0;
    fstream readFile, tempFile;
    tempFile.open("Temp.txt", ios::out);//write
    readFile.open(dataFile, ios::in);//read
    while (!readFile.eof()) {
        string line;
        getline (readFile, line );

        if (line.length() > 0) {
            product = readProductFromFile(line);
            if (product.productId != productId) {
                tempFile << product.productId << "," << product.productName << "," << product.price  << "\n";
            } else {
                deleted = 1;
            }
        }

    }

    tempFile.close();
    readFile.close();
    remove(dataFile.data());
    rename("Temp.txt", dataFile.data());
    return deleted;



}

//------------------
void updateProduct(int productId, Product updatedProduct) {
    Product product;
    fstream readFile, tempFile;
    tempFile.open("Temp.txt", ios::out);//write
    readFile.open(dataFile, ios::in);//read
    while (!readFile.eof()) {
        string line;
        getline (readFile, line );

        if (line.length() > 0) {
            product = readProductFromFile(line);
            if (product.productId == productId) {
                tempFile << updatedProduct.productId << "," << updatedProduct.productName << "," << updatedProduct.price  << "\n";
            } else {
                tempFile << product.productId << "," << product.productName << "," << product.price  << "\n";
            }
        }

    }

    tempFile.close();
    readFile.close();
    remove(dataFile.data());
    rename("Temp.txt", dataFile.data());

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
                int deleted = deleteProduct(productId);
                if (deleted == 1) {
                    cout <<"Record deleted successfully" << endl;
                } else {

                    cout <<"No Record found for deletion" << endl;
                }
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
                cout<<"Enter Product Id to Search: ";
                cin >> productId;
                Product product = searchProduct(productId);
                cout << "************SEARCH RESULT************" << endl;
                if (product.productId > 0) {
                    cout << product;
                } else {
                    cout << "No product found" << endl;
                }
                cout << "*************************************" << endl;

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
                    cout <<"You are going to UPDATE following product: " << endl;
                    cout << product;
                    cout <<"********************************************************" << endl;
                    cout <<"New Product Name";
                    cin >>product.productName;
                    cout << "New Price: ";
                    cin >> product.price;
                    cin.ignore();

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