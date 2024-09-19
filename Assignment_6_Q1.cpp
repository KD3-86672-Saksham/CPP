#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;


public:
Date()
{
   day=0;
   month=0;
   year=0;
}
Date(int day,int month,int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}
void Setday(int day)
{
    this->day=day;
}
void Setmonth(int month)
{
    this->month=month;
}
void Setyear(int year)
{
    this->year=year;
}
void DisplayDate()
{
     cout<<"Date of Birth:"<<day<<"/"<<month<<"/"<<year<<endl;
}
void AcceptDate()
{
     cout<<"Enter the date ";
     cin>>day;
     cout<<"Enter the month ";
     cin>>month; 
     cout<<"Enter the year ";  
     cin>>year;
}

};
class Person
{
    string name;
    string Address;
    Date dob;
public:
Person()
{
    name="";
    Address="";

}
Person(string name,string Address,int day,int month, int year)
{
    this->name=name;
    this->Address=Address;
    this->dob.Setday(day);
    this->dob.Setmonth(month);
    this->dob.Setyear(year);
}
void Display()
{
     cout<<"\nName "<<name<<endl;
     cout<<"Address "<<Address<<endl;
     dob.DisplayDate();
}
void acceptperson()
{
     cout<<"Enter Name of the person ";
     cin>>name;
     cout<<"Enter the Address: ";
     cin>>Address;   
     dob.AcceptDate();
}

};

class Employee:public Person
{
    int id;
    int sal;
    string dept;
    Date joiningdate;

public:
  Employee():Person()
  {
    this->id=0;
    this->sal=0;
    this->dept="";
    
  }
   Employee(string name, string Address, int day, int month, int year, int id, int sal, string dept, int jday, int jmonth, int jyear) : Person(name, Address, day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
        this->joiningdate.Setday(jday);
        this->joiningdate.Setmonth(jmonth);
        this->joiningdate.Setyear(jyear);
    }
     void AcceptEmployee()
    {
        Person::acceptperson(); 
        cout << "ID: "<<endl ;
        cin>> id ;
        cout << "Salary: " << endl;
        cin>>sal; 
        cout << "Department: "  << endl;
        cin>>dept;
        joiningdate.AcceptDate();
    }

    void DisplayEmployee()
    {
        Person::Display(); 
        cout << "ID: " << id << endl;
        cout << "Salary: " << sal << endl;
        cout << "Department: " << dept << endl;
        cout << "Joining Date: ";
        joiningdate.DisplayDate();
    }
};

int main()

{

    Employee e1;
    e1.AcceptEmployee();
    e1.DisplayEmployee();
    return 0;
}