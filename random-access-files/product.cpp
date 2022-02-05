#include<iostream>
#include<string>
using namespace std;
class Product {
public:
    int productId = 0;
    string productName;
    int price = 0;
    int discount = 0;
    int stock = 0;

    friend ostream& operator <<(ostream &out, const Product &obj) {

       out  << std::left << setw(10) << obj.productId ;
        out  << std::left << setw(30) << obj.productName;
        out << std::left <<setw(10) << obj.price;
        out << std::left <<setw(10) << obj.discount;
        out << std::left <<setw(10) << obj.stock << endl;
        return out;

    }

    friend istream& operator >>(istream &input,  Product &product) {
        cout << "Enter Product Id: ";
         do {
             input >> product.productId;
             if (product.productId <= 9999 && product.productId >= 0) {
                break;
           } else {
               cout <<"Product Id must between 1 and 1000" << endl;
               cout << "Enter Product Id: ";
           }

        } while(1);
        input.ignore();
        cout<<"Enter Product name: ";

        do {
            getline(input, product.productName);
            if (product.productName.size() <= 20) {
                break;
            } else {
                cout <<"Product Name length can\'t more than 20" << endl;
                cout << "Enter Product Name: ";
            }

        } while(1);
        cout<<"Enter Price: ";
        do {
            input >> product.price;
            if (product.price <= 9999 && product.price >= 0) {
                break;
            } else {
                cout <<"Product Price must between 1 and 9999" << endl;
                cout << "Enter Product Price: ";
            }

        } while(1);
     //   input >>  product.price;
        input.ignore();
        cout<<"Enter Discount: ";
        do {
            input >> product.discount;
            if (product.discount <= 100 && product.discount >= 0) {
                break;
            } else {
                cout <<"Product discount must between 1 and 100" << endl;
                cout << "Enter Discount : ";
            }

        } while(1);
        input.ignore();
        cout<<"Enter Stock: ";
        do {
            input >> product.stock;
            if (product.stock <= 1000 && product.stock >= 0) {
                break;
            } else {
                cout <<"Product stock  must between 1 and 1000" << endl;
                cout << "Enter Stock : ";
            }

        } while(1);
        input.ignore();
        return input;

    }
    static long getSize() {
        return sizeof productId +
         sizeof productName +
        sizeof price +
        sizeof discount +
        sizeof stock;
    }

};