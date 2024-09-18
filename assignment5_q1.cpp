#include<iostream>
using namespace std;

class date{
    int day;
    int month;
    int year;

    public:

        date(int day,int month,int year){
            this->day=day;
            this->month=month;
            this->year=year;
        }

        date(){
            day = 6;
            month = 12;
            year = 2001; 
        }

        void acceptDate(){
            cout<<"enter the day - ";
            cin>>day;
            cout<<"enter the month - ";
            cin>>month;
            cout<<"enter the year - ";
            cin>>year;
        }

        void displayDate(){
            cout<<"the date is - "<<day<<month<<year<<endl;
             
        }

        void setday(int day){
            this->day=day;
        }

        void setmonth(int month){
            this->month=month;
        }

        void setyear(int year){
            this->year=year;
        }
};

class person{
    string name;
    string address;
    date birthday;

    public:
        
        person(){
            name = "saksham";
            address ="noida uttar pradesh";
        }

        person(string name,string address,date birthday,int day,int month,int year){
            this->name=name;
            this->address=address;
            this->birthday.setday(day);
            this->birthday.setmonth(month);
            this->birthday.setyear(year);
        }

        void acceptPerson(){
            cout<<"enter the name - ";
            cin>>name;
            cout<<"enter the address - ";
            cin>>address;
            birthday.acceptDate();

        }

        void displayPerson(){
            cout<<"the details of the person are - "<<name<<address<<endl;
            birthday.displayDate();
        }
};


int main(){
    person p1;
    p1.acceptPerson();
    p1.displayPerson();

    person p2;
    p2.acceptPerson();
    p2.displayPerson();
    return 0;                   

}