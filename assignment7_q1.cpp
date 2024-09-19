#include<iostream>
using namespace std;

class product{
    int id;
    string title;
    public:
    double price;
 
        product(){}

        product(int id,string title,double price){
            this->id = id;
            this->title = title;
            this->price = price;
        }

        virtual void accept(){
            cout<<"enter the id of the product - "<<endl;
            cin>>id;
            cout<<"enter the title of the product - "<<endl;
            cin>>title;
            cout<<"enter the price of the product - "<<endl;
            cin>>price;
        }

        virtual void display(){
            cout<<"the id is - "<<id<<endl;           
            cout<<"the title is - "<<title<<endl;           
            cout<<"the price is - "<<price<<endl;           
        }

                double getBookDiscountedPrice(){
            return price*0.9;
        }

                double getTapeDiscountedPrice(){
            return price*0.95;
        }
};

class book : public product{
    string author;

    public:
        book(){}

        book(
            string author,int id,string title,double price):product(id,title,price){
            this->author = author;
        }

        void accept(){ 
            product::accept();
            cin.ignore();
            cout<<"enter the author - "<<endl;
            cin>>author;
        }

        void display(){
            product::display();
            cout<<"the author is - "<< author <<endl;
        }

        };

class tape : public product{
    string artist;

    public:
        tape(){}

        tape(string artist,int id,string title,double price):product(id,title,price){
            this->artist = artist;
        }

        void accept(){
            product::accept();
            cout<<"enter the artist - "<<endl;
            cin>>artist;
        }

        void display(){
            product::display();
            cout<<"the artist is - "<<artist<<endl;
        }

};
         


int main(){
    product *arr[3];

    for(int i = 0;i<3;i++){
        int choice;
        cout<<"enter 1 for book : 2 for tape - "<<endl;
        cin>>choice;

        if(choice == 1){
            arr[i] = new book;
            arr[i]->accept();
            
          }
        else if(choice == 2){
            arr[i] = new tape;
            arr[i]->accept();
        }
        else{
            cout<<"wrong choice"<<endl;
            i--;
            continue;
        } 
    }

    int total = 0;
    for(int i = 0;i<3;i++){
        if(typeid(*arr[i]) == typeid(book)){
           total = total + arr[i]->getBookDiscountedPrice();
        }
        else{
            total = total + arr[i]->getTapeDiscountedPrice();
        }
    }
    cout<<"the total is - "<<total<<endl;
    return 0;
}