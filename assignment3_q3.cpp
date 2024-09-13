#include<iostream>
using namespace std;
class Address
{
    string building;
    string street;
    string city;
    int pin;
public:
    Address()
    {
        building= "No Building";
        street= "No street";
        city="xyz";
        pin=101010;
    }
    Address(string b,string s,string c,int p)
    {
         building=b;
         street=s;
         city=c;
         pin=p;
    }
//mutatur (setter)
    void setAddress(string c,int p)
    {
        cout<<"Cnter City :";
        cin>>city;
        cout<<"Enter Pin :";
        cin>>pin;
    }
//inspector (getter)
    int getAddress()
    {
        return city,pin;

    }
    void accept()
    {
        cout<<"Enter Building Name :"<<endl;
        cin>>building;
        cout<<"Enter Street :"<<endl;
        cin>>street;
        cout<<"Enter City Name :"<<endl;
        cin>>city;
        cout<<"Enter pin no :"<<endl;
        cin>>pin;
    }

    void display()
    {
        cout<<"Buiding name :"<<building<<endl;
        cout<<"Street :"<<street<<endl;
        cout<<"City :"<<city<<endl;
        cout<<"Pin No :"<<pin<<endl;
    }
};
int main()
{
    Address a1;
    Address a2;
    Address a3;
    a1.display();

    a1.setAddress("delhi",110092);
    a1.display();

    // a1.getAddress();
    // a1.display();

    a2.accept();
    a2.display();

    Address a4("608","silicon city","noida",201301);
    a4.display();
    return 0;
}