#include<iostream>
using namespace std;

struct date{
    int day;
    int month;
    int year;

    void accept_date(){
        cout<<"enter the date : "<<endl;
        cin>>day>>month>>year;
    }

    void display_date(){
        cout<<"the date is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }

    void initdate(){
        day = 1;
        month = 1;
        year = 1990;
    }

    bool isLeapYear(){
        if((year%4 == 0 && year%100 != 0) || year%400 == 0 ){
            cout<<"is a leap year"<<endl;
            return true;
        }
        else{
            cout<<"not a leap year"<<endl;
            return false;
        }
    }
};

int main(){
    struct date d1;
    d1.initdate();
    d1.display_date();
    d1.accept_date();
    d1.display_date();
    d1.isLeapYear();
    
    return 0;
}