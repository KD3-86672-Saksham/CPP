#include<iostream>
using namespace std;


class toll_booth{
    unsigned int paying_cars;
    unsigned int not_paying_cars;
    unsigned int total_cars;
    double amt;

    public:
    toll_booth(){
        paying_cars = 0;
        not_paying_cars = 0;
        total_cars = 0;
        amt = 0;
    }

    void payingcars(){
        paying_cars++;
        amt = amt + 0.5;
        total_cars++;
    }

    void notpayingcars(){
        not_paying_cars++;
        total_cars++;
    }

    void display(){
        cout<<"total - "<<total_cars<<endl;
        cout<<"paying cars - "<<paying_cars<<endl;
        cout<<"Not paying cars - "<<not_paying_cars<<endl;
        cout<<"Total amount - "<<amt<<endl;

    }
    
};

int main(){

    toll_booth t1;
    toll_booth t2;

    t1.payingcars();
    t1.payingcars();
    t1.payingcars();
    t1.payingcars();
    t1.payingcars();
    t1.payingcars();
    t1.payingcars();
    t1.notpayingcars();
    t1.notpayingcars();
    t1.notpayingcars();
    t1.notpayingcars();
    t1.notpayingcars();
    t1.display();
    t2.display();
    return 0;
}