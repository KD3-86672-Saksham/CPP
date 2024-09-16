#include<iostream>
using namespace std;

class Stack
{  
   int size;
   int*ptr;
   int top;
public:
Stack(int sizess=2)
{
    this->size=sizess;
    top = -1;
    ptr = new int[size];

}

void push(int element)
{
    if (isfull())
    {
        cout<<"Stack is Full... can't push...:"<<endl;
    }
    else
    {
        ptr[++top]=element;
        cout<<"Pushed element :"<<element<<endl;
    }
}
void pop(int element)
{
    if (isempty())
    {
        cout<<"Stack is Empty... can't Pop element...:"<<endl;
    }
        else
    {
        ptr[--top]=element;
        cout<<"poped element :"<<element<<endl;
    }

}
void peek()
{
     cout<<"peeked ele is"<<ptr[top]<<endl;
}
bool isempty()
{
    return top == -1;
}
bool isfull()
{
    return top == size-1;
}
};


int main()
{
    int x;
    cout<<"pls Enter array size :"<<endl;
    cin>>x;

    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.peek();

    Stack s2(x);
    s2.push(10);
    s2.peek();
    
    return 0;
}
