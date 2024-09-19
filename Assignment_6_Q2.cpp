#include<iostream>
using namespace std;

class Employee
{
    int id;
    double salary;

    public:

    Employee()
    {}

    Employee(int id,double salary)
    {
         this->id=id;
        this->salary=salary;
   }
   void setid(int id)
   {
     this->id=id;
   }
   void setSalary(double salary)
   {
     this->salary=salary;
   }
   int getid()
   {
     return id;
   }
   double getsalary()
   {
      return salary;
   }
   virtual void accept()
   {
      cout<<"Enter the Id :";
      cin>>id; 
      cout<<"Enter the Salary :";
      cin>>salary; 
   }
   virtual void display()
   {
         cout<<"\nDetails";
         cout<<"ID :"<<id<<endl ;
         cout<<"Salary :"<<salary<<endl ;

   }

};

class Manager:virtual public Employee
{
    double bonus;

protected:
 void acceptManager()
   {
    
      cout<<"Enter the Bonus :";
      cin>>bonus; 
       
   }
   void displayManager()
   {    
      
       cout<<"Bonus :"<<bonus<<endl ;
   }
  public:

  Manager()
    {}

  Manager(int id,double salary,double bonus):Employee(id,salary)
    {
        this->bonus=bonus;
   }
   void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
   void setBonus(double bonus)
   {
     this->bonus=bonus;
   }
   double getBonus()
   {
     return bonus;
   }

  
  

};
class Salesman:virtual public Employee
{
    double commission;


protected:
  void acceptSalesman()
   {
      cout<<"Enter the Commission :";
      cin>>commission; 
       
   }
   void displaySalesman()
   {    
      
       cout<<"commission :"<<commission<<endl ;
   }
  public:

    Salesman()
    {}

    Salesman(int id,double salary,double commission):Employee(id,salary)
    {
        this->commission=commission;
   }
   void accept()
    {
        Employee::accept();
        acceptSalesman();
    }

    void display()
    {
        Employee::display();
        displaySalesman();
    }
   void setCommission(double commission)
   {
     this->commission=commission;
   }
   double getCommission()
   {
     return commission;
   }

  
 

};
class Salesmanager:public Manager,public Salesman
{

  public:
    Salesmanager()
    {

    }
    Salesmanager(int id,double salary,double bonus,double commission):Employee(id,salary)
    {
        this->setBonus(bonus);
        this->setCommission(commission);
    }
    void accept()
    {   
       
        Employee::accept();
        this->acceptManager();
        this->acceptSalesman();

    }
    void display()
    {
        Employee::display();
        this->displayManager();
        this->displaySalesman();
    }
};
int main()
{
    Employee *e = new Salesmanager;
    e->accept();
    e->display();

    return 0;
}
