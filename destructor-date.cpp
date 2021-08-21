#include <iostream>

using namespace std;
class Date {
private:
    int *day;
    int *month;
    int *year;
public:
    // Constructor overload
    Date() {
        this->day = new int;
        this->month = new int;
        this->year = new int;

    }



    Date(const Date &obj) {

        this->day = new int;
        this->month = new int;
        this->year = new int;

        *this->day = *obj.day;
        *this->month = *obj.month;
        *this->year = *obj.year;
        /*
          this->day = obj.day;
          this->month = obj.month;
          this->year = obj.year;*/
    }
    ~Date() {
        cout <<"destroying objects";
        delete this->day;
        delete this->month;
        delete this->year;
    }

    void setDay(int day) {
        *this->day = day;
    }

    int getDay() {
        return *this->day;
    }

    void setMonth(int month) {
        *this->month = month;
    }

    int getMonth() {
        return *this -> month;
    }

    void setYear(int year) {
        *this->year = year;
    }

    int getYear(){
        return *this->year;
    }



    string getDate() {
        return std::to_string(*this->day) + "/" + std::to_string(*this->month) + "/" + std::to_string(*this->year);
    }

    void setDate(const Date dt) {
        cout <<"value setting";
    }


};

main() {
    Date d;
    d.setDay(1);
    d.setMonth(4);
    d.setYear(2021);
    {
        Date d2;
    }
    cout <<d.getDate()<<endl;
}

