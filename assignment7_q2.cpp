#include<iostream>
using namespace std;

class employee
{
    int empid;
    double salary;

    public:

        employee(){}

        employee(int empid, double salary){
            this->empid = empid;
            this->salary = salary;
        }

        void setEmpid(int empid){
            this->empid = empid;
        }

        int getEmpid(){
            return empid;
        }

        void setSalary(double salary){
            this->salary = salary;
        }

        int getSalary(){
            return salary;
        }

        virtual void accept(){
            cout<<"enter the empid - "<<endl;
            cin>>empid;
            cout<<"enter the salary - "<<endl;
            cin>>salary;
        }

        virtual void display(){
            cout<<"empid - "<<empid<<endl;
            cout<<"salary - "<<salary<<endl;
        }
};

class manager : virtual public employee{
    double bonus;

    public:
        manager(){}

        manager(int empid, double salary, double bonus):employee(empid,salary){
            this->bonus = bonus;
        }

        void setBonus(){
            this->bonus;
        }

        double getBonus(){
            return bonus;
        }

        void accept(){
            employee::accept();
            cout<<"enter the bonus amount - "<<endl;
            cin>>bonus;
        }

        void display(){
            employee::display();
            cout<<"the bonus is - "<<bonus<<endl;
        }

        protected:
            void acceptManager(){
                cout<<"enter the bonus amount - "<<endl;
                cin>>bonus;
            }

            void displayManager(){
            cout<<"the bonus is - "<<bonus<<endl;
        }
};

class salesman : virtual public employee{
    double commission;
    public:

        salesman(){}

        salesman(int empid, double salary, double commission):employee(empid,salary){
            this->commission = commission;
        }

        void setCommission(){
            this->commission;
        }

        int getCommission(){
            return commission;
        }

        void accept(){
            employee::accept;
            cout<<"enter the commission - "<<endl;
            cin>>commission;
        }

        void display(){
            employee::display;
            cout<<"the commission is - "<<commission<<endl;
        }

        protected:
            void acceptSalesman(){
                cout<<"enter the commission - "<<endl;
                cin>>commission;
            }

            void displaySalesman(){
            cout<<"the commission is - "<<commission<<endl;
        }
};

class salesmanager : public manager, public salesman{
    public:
        salesmanager(){}

        salesmanager(int empid, double salary, double bonus, double commission){

        }

        void accept()
    {
        manager::accept();
        acceptSalesman();
    }

    void display()
    {
        manager::display();
        displaySalesman();
    }
};

void countmanager(employee **arr, int index)
{
    int countE=0;
    int countS=0;
    int countSM=0;
    for(int i=0; i<index; i++)
    {
        if(typeid(*arr[i])==typeid(manager))
        {
            countE++;
            
        }
        else if((typeid(*arr[i])==typeid(salesman)))
        {
            countS++;
        }
        else
        {
            countSM++;
        }

        
    }
    cout<<"Total Manager :- "<<countE<<endl;
    cout<<"Total salesman :- "<<countS<<endl;
    cout<<"Total salesManager :- "<<countSM<<endl;
}


int main(){
    employee *arr[5];
    

    int index=0;
    int choice;



    do{
        cout<<"0.Exit "<<endl;
    cout<<"1. Accept Employee "<<endl;
    cout <<"2.Display the count of all employees with respect to designation  "<<endl;
    cout<<"3.Display all manager "<<endl;
    cout<<"4.Display all salesman"<<endl;
    cout<<"5. Display all salesmanager "<<endl;
    cout<<"Enter Your choice "<< endl;
    cin>>choice;
        switch (choice)
        {
            case 1: char ch;
                    do{
                            cout<<"a.Accept Manager "<<endl;
                            cout<<"b. Accept Salesman"<<endl;
                            cout<<"c.Accept Salesmanager "<<endl;
                            cout<<"e. Exit"<<endl;
                            cout<<"Enter your choice ";
                            cin>>ch;

                    switch(ch)
                    {
                        case 'a': if(index<5){

                            // arr[index] = new manager;
                            // arr[index]->accept();
                            // index++;
                            
                            }
                            else {
                                cout << "Array is full.....";
                            }
                            break;

                         case 'b': if (index<5)
                         {
                            // arr[index] = new salesman;
                            // arr[index]->accept();
                            // index++;
                         }
                         break;

                         case 'c': if(index<5)
                         {
                            arr[index] = new salesmanager;
                            arr[index]->accept();
                            index++;
                         }
                         break;

                         case 'e': cout<<"Thank You ....";
                         break;

                         default : cout<<"Wrong Input ......";
                         break;
                            
                    }
                    } while(ch!='e');

                    break;

             case 2: 
             
                    countmanager(arr , index); 
                    break;

             case 3:
                 
                  for(int i=0; i<index; i++)
                 {
                    if(typeid(*arr[i])==typeid(manager))
                    {
                        arr[i]->display();
                    }
                 } 
                 break;
    
             case 4:  
             
                     for( int i= 0; i<index; i++)
                    {
                        if(typeid(*arr[i])==typeid(salesman))
                        {
                            arr[i]->display();

                        }
                    }  
                    break;
            
            case 5: 

                    for(int i=0 ; i<index; i++)
                    {
                        if(typeid(*arr[i])==typeid(salesmanager))
                        {
                            arr[i]->display();
                        }
                    }
                    break;

            default : 
            
                    cout<<"Wrong Input ......."; 
                    break;     
        }

    } while(choice !=0);

    return 0;
    
}
