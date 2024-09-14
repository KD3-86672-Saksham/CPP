#include<iostream>
using namespace std;

class time{

    int hour,minute,second;

    public:

    time(){
        hour = 6;
        minute = 32;
        second = 44;
    }

    time(int h,int m,int s){
        hour = h;
        minute = m;
        second = s;
    }

    int getHour(){
        //cout<<"enter the hours - "<<endl;
        cin>>hour;
        return hour;
    }

    int getminute(){
        //cout<<"enter the minutes - "<<endl;
        cin>>minute;
        return minute;
    }

    int getsecond(){
        //cout<<"enter the seconds - "<<endl;
        cin>>second;
        return second;
    }

    void printTime(){
        cout<<"the time is - "<<hour<<":"<<minute<<":"<<second<<endl;
    }

    void setHour(int a){
        this->hour = a;
    }

    void setMinute(int b){
        this->minute = b;
    }

    void setSecond(int c){
        this->second = c;
    }

};

int main(){

    //time t1;
    //t1.printTime();

    time **ptr = new time*[5];
    

    for(int i=0;i<2; i++){
        ptr[i] = new time();

        // ptr[i]->setHour(20);
        // ptr[i]->setMinute(30);
        // ptr[i]->setSecond(20);

        ptr[i]->getHour();
        ptr[i]->getminute();
        ptr[i]->getsecond();
        ptr[i]->printTime();


    }
    // ptr[1]=new time();
    // ptr[2]=new time();
    // ptr[3]=new time();
    // ptr[4]=new time();

    for (int i = 0; i < 2; i++)
    {
        delete[] ptr[i];
        ptr[i] = NULL;
    }

    delete[] ptr;
    ptr = NULL;
    
    return 0;

}