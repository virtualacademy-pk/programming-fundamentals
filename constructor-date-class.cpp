#include <iostream>

using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
public:
    // Constructor overload
    Date() {
        this->day = 1;
        this->month = 1;
        this->year = 2021;
    }

    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }


    Date(const Date &obj) {
        cout<< "I am copy constructor"<<endl;
        this->day = obj.day;
        this->month = obj.month;
        this->year = obj.year;
    }

    void setDay(int day) {
        this->day = day;
    }

    int getDay() {
        return this->day;
    }

    void setMonth(int month) {
        this->month = month;
    }

    int getMonth() {
        return this -> month;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getYear(){
        return this->year;
    }



    string getDate() {
        return std::to_string(this->day) + "/" + std::to_string(this->month) + "/" + std::to_string(this->year);
    }

    void setDate(const Date dt) {
        cout <<"value setting";
    }


};
main() {
    Date d;
    d.setYear(2019);
    Date d2 ;
    d2.setDate(d);
    cout <<d2.getDate();
}

