#include<iostream>
#include<string>
using namespace std;
class Product {
public:
    int productId;
    string productName;
    int price;
    friend ostream& operator <<(ostream &out, const Product &obj) {
        out <<"Product Id: " << obj.productId << endl;
        out <<"Product Name: " << obj.productName << endl;
        out <<"Product Price: " << obj.price << endl;
        return out;

    }

    friend istream& operator >>(istream &input,  Product &product) {
        cout<<"Enter Product Id: ";
        input >> product.productId;
        input.ignore();
        cout<<"Enter Product name: ";
        getline(input, product.productName);
        cout<<"Enter Price: ";
        input >> product.price;
        return input;

    }

};