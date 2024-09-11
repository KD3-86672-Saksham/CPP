#include<iostream>
using namespace std;
namespace Nstudent{
class student{
    public:
    int rollNo;
    string name;
    int marks;

    void accept(){
        cout<<"enter the details : "<<endl;
        cin>>name>>rollNo>>marks;
    }

    void display(){
        cout<<"the student is : "<<name<<"\n"<<rollNo<<"\n"<<marks<<endl;
    }

    void init(){
        rollNo = 0;
        name = "tee";
        marks = 0;
    }
};
}
using namespace Nstudent;
int main(){
        student s1;
    s1.init();
    s1.display();
    s1.accept();
    s1.display();
    
    return 0;
}
