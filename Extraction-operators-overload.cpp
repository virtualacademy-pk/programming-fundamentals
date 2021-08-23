#include <iostream>
using namespace std;
class Complex {
    private: 
        int real;
        int imaginary;
    public:
        Complex(int real, int imaginary) {
            this->real = real;
            this->imaginary = imaginary;
        }

        void setReal(int real) {
            this->real = real;
        }
        
        int getReal() {
            return this->real;
        }
         
        void setImaginary(int imaginary) {
            this->imaginary = imaginary;
        }
        
        int getImaginary() {
            return this->imaginary;
        }
    
        Complex operator + (Complex const &obj) {
            Complex tmp(0,0);
            tmp.real = this->real +  obj.real;
            tmp.imaginary = this->imaginary + obj.imaginary;
            return tmp;
        }
        
        Complex operator * (Complex const &obj) {
            Complex tmp(0,0);
            tmp.real = this->real *  obj.real;
            tmp.imaginary = this->imaginary * obj.imaginary;
            return tmp;
        }
        
        Complex operator + (int num) {
            Complex tmp(0,0);
            tmp.real = this->real +  num;
            tmp.imaginary = this->imaginary;
            return tmp;
        }
        
        // Prefix
        Complex operator ++() {
            
            this->real++;
            
            Complex tmp(0,0);
            tmp.real = this->real;
            tmp.imaginary = this->imaginary;
            
            return tmp;
        } 
        // Postfix
        Complex operator ++(int) { 
            
            this->real++;
            
            Complex tmp(0,0);
            tmp.real = this->real;
            tmp.imaginary = this->imaginary;
            
            return tmp;
        } 
         
        bool operator <= (const Complex &obj) {
            if (this->real <= obj.real ) {
                return true;
            } else {
                return false;
            }
        
        }
        bool operator < (const Complex &obj) {
            if (this->real < obj.real ) {
                return true;
            } else {
                return false;
            }
        
        }
        
        bool operator >= (const Complex &obj) {
            if (this->real >= obj.real ) {
                return true;
            } else {
                return false;
            }
        
        }
        
         bool operator > (const Complex &obj) {
            if (this->real > obj.real ) {
                return true;
            } else {
                return false;
            }
        
        }
        
        bool operator == (const Complex &obj) {
            if (this->real == obj.real && this->imaginary == obj.imaginary ) {
                return true;
            } else {
                return false;
            }
        
        }
        
        bool operator != (const Complex &obj) {
            if (this->real != obj.real || this->imaginary != obj.imaginary) {
                return true;
            } else {
                return false;
            }
        
        }
        void increment() {
            this->real++;
        }
        
        friend ostream& operator <<(ostream &out, const Complex &obj) {
            out <<obj.real<< " + " << obj.imaginary <<"i";
            return out;
            
        }
        
        friend istream& operator >>(istream &input,  Complex &obj) {
            cout <<"Enter Real part: ";
            input>>obj.real;
            cout<< "Enter imaginary part: ";
            input>> obj.imaginary;
            return input;
            
        }
    
};
int main() { 
    Complex c1(5,3);  
    Complex c2(5,2);
    cin>>c1;
    cout << c1;
      return 1;
}

