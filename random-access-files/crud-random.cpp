#include <iostream>
#include <fstream>
#include "product.cpp"
using namespace std;
static string dataFile="testout.txt";
Product findById(int productId){
    ifstream file(dataFile, ios::binary);
    if(!file){
        cerr<<"Error. Cannot open file."<<endl;
        exit(EXIT_FAILURE);
    }
    Product searched;
    Product product;
    while(file.read(reinterpret_cast<char *>(&product),    sizeof product)){
        if(product.productId == productId) {
            searched = product;
            break;
        }

    }
    file.close();
    return searched;
}
void updateProduct(int productId, Product updatedProduct){
    fstream file(dataFile, ios::in|ios::out|ios::binary);
    if(!file){
        cerr<<"Error. Cannot open file."<<endl;
        exit(EXIT_FAILURE);
    }

    Product product;
    while(file.read(reinterpret_cast<char *>(&product),
                    sizeof product)){
        if(product.productId == productId) {

            long pos = -1*sizeof product;
            file.seekp(pos, ios::cur);
            file.write(reinterpret_cast<const char *>(&updatedProduct),
                       sizeof product);
            break;
        }

    }
    file.close();

}
void createProduct(Product p){
    ofstream file(dataFile, ios::out|ios::app|ios::binary);
    if(!file){
        cerr<<"Error. Cannot open file."<<endl;
        exit(EXIT_FAILURE);
    }



    // cin>>setw(10)>>fn>>setw(10)>>ln>>setw(10)>>ph;

  //   file.write(reinterpret_cast<const char *>(&p), sizeof product);
   file.write(reinterpret_cast<const char *>(&p), sizeof p);
    file.close();
}
void view(){
    int count=0;
    ifstream file(dataFile,ios::binary);
    if(!file){
        cerr<<"Error. Cannot open file."<<endl;
        exit(EXIT_FAILURE);
    }
    Product product;
    cout  << std::left << setw(10) << "Id" ;
    cout  << std::left << setw(30) <<"Product Name";
    cout << std::left <<setw(10) << "Price";
    cout << std::left <<setw(10) <<"Discount";
    cout << std::left <<setw(10) << "Stock" << endl;
    while(file.read(reinterpret_cast<char *>(&product), sizeof product)){
        if(product.productId != 0){
            count++;
            cout<<product;
        }
    }
    cout<<"--------------------------------"<<endl;
    cout<<"Total: "<<count<<" Record(s)"<<endl;
    cout<<"--------------------------------"<<endl;
    file.close();
}
int main () {
      Product p;
   // cin >> p;

 //   createProduct(p);

        p = findById(109);

   p.discount = 10;
   p.stock = 71;
  //  updateProduct(109, p);
     view();
    return 0;
}  