#include<iostream>
#include<string>
using namespace std;

enum EAccountType{
    savings = 1 ,
    current,
    DMAT
};

class InsufficientFundsException{
    string message;

    public : 
        InsufficientFundsException(){}

        InsufficientFundsException(string message){
            this->message = message;
            
        }

        void display() {
            cout << message <<endl ;
        }
};

class Account{
    EAccountType accountType;
    double Balance;

    public:
        int accno;
        Account(){
            int accno=0;
            double Balance=0.0;
        }

        
        void accept(){
            cout << "ENTER ACCOUNT NO:"<< endl;
            cin >> accno;
            cout << "SELECT YOUR ACCOUNT TYPE : "<<endl;
            cout << "1.SAVINGS"<<endl;
            cout << "2.CURRENT"<<endl;
            cout << "3.DMAT"<<endl;
            int choice;
            cin >> choice;
            accountType=EAccountType(choice);
            cout << "ENTER BALANCE :"<<endl;
            cin >> Balance;
        }

        void display(){

            cout << "ACCOUNT NO : " << accno << endl;
            switch(accountType){
                case savings:
                    cout << "SAVINGS ACCOUNT"<<endl;
                    break;
                case current:
                    cout << "CURRENT ACCOUNT"<<endl;
                    break;
                 case DMAT:
                    cout << "DMAT ACCOUNT"<<endl;
                    break;
            }
            cout << Balance <<endl;
 
        }

        void Deposit(int amount){
            if(amount<0){
                throw InsufficientFundsException("DEPOSIT AMOUNT CANNOT BE LESS THAN 0");
            }
            Balance+=amount;
            cout << "DEPOSIT SUCCESSFULL,UPDATED BALANCE : " << Balance <<endl;
        }

        void Withdrawal(int amount){
            if(amount > Balance || amount < 0 ){
                throw InsufficientFundsException("INSUFFICIENT FUNDS OR AMOUNT CANNOT BE LESS THAN 0");
            }
            Balance-=amount;
            cout << "WITHDRAWAL SUCCESSFULL,UPDATED BALANCE : " << Balance << endl;
        }
};



int main()
{
    Account *arr[5];
    int ch = 0;
    int acno;
    int amt;

    do{
        cout << "0.EXIT"<<endl;
        cout << "1.CREATE ACCOUNT"<<endl;
        cout << "2.DISPLAY ACCOUNT"<<endl;
        cout << "3.DEPOSIT"<<endl;
        cout << "4.WITHDRAW"<<endl;

        cin >> ch;

        switch(ch){
            case 0 : 
                cout << "THANK YOU !";
                break;
            
            case 1:
                for(int i=0;i<5;i++){
                    arr[i]=new Account();
                    arr[i]->accept();
                }
                break;

            case 2:
                cout << "ENTER YOUR ACCNO : " << endl;
                cin >> acno;
                for(int i=0;i<5;i++){
                    if(arr[i]->accno == acno){
                        arr[i]->display();
                    }
                }
                break;
            case 3:
                cout << "ENTER YOUR ACCNO : " << endl;
                cin >> acno;
                cout << "ENTER YOUR AMOUNT : "<<endl;
                cin >> amt;
                for(int i=0;i<5;i++){
                    if(arr[i]->accno == acno){
                        try
                        {
                            arr[i]->Deposit(amt);
                        }
                        catch(InsufficientFundsException e)
                        {
                           e.display();
                        }
                         
                    }
                }
                break;
            case 4:
                cout << "ENTER YOUR ACCNO : " << endl;
                cin >> acno;
                cout << "ENTER YOUR AMOUNT : "<<endl;
                cin >> amt;
                for(int i=0;i<5;i++){
                    if(arr[i]->accno == acno){
                        try
                        {
                            arr[i]->Withdrawal(amt);
                        }
                        catch(InsufficientFundsException e)
                        {
                           e.display();
                        }
                        
                    }
                }
                break;
        }


    }while(ch != 0);
    return 0;
}