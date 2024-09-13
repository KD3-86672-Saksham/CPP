#include<iostream>
using namespace std;

class volume{
    

int length,width,height;
double vol;

public:
    float cal_vol(){
        
        vol = length*width*height;
        cout<<"the volume is equal to "<<vol<<endl;
        return vol;
    }

    volume(){
         length = 15;
         width = 20;
         height = 19;
    }

    volume(int x){
        length = x;
        width = x;
        height = x;
    }

    volume(int x,int y,int z){
        length = x;
        width = y;
        height = z;
    }

    // void accept1(){
    //     cout<<"enter the value of x : "<<endl;
    //     cin>>length;
    // }   

    void accept2(){
        cout<<"enter the value of length : "<<endl;
        cin>>length;
        cout<<"enter the value of width : "<<endl;
        cin>>width;
        cout<<"enter the value of height : "<<endl;
        cin>>height;
    }

    void display(){
        cout<<"the volume = "<<vol<<endl;
    }
};


int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. no parameters" << endl;
    cout << "2. single parameters " << endl;
    cout << "3. triple parameters "<<endl;
    cout<<"enter your choice - ";
    cin >> choice;
    return choice;
}

int main(){
    
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:{
          volume v1;
          cout<<"Default"<<v1.cal_vol();
          v1.display();
        }
        break;
        case 2:{
            int x;
          cout<<"Enter one value to cal_vol :";
          cin>>x;
          volume v2(x);
          cout<<"Default"<<v2.cal_vol();
          v2.display();
        }
        break;
        case 3:
        {
          int a;
          int b;
          int c;
          cout<<"Enter a value to cal_vol :";
          cin>>a;
          cout<<"Enter b value to cal_vol :";
          cin>>b;
          cout<<"Enter c value to cal_vol :";
          cin>>c;
          volume v3(a,b,c);
          cout<<"Default"<<v3.cal_vol()<<endl;
          v3.display();
        }
            break;    
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }


}