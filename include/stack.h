#include<iostream>
#include "linkedlist.h"
using namespace std;

class Stack{

    linkedlist list;
    
    public:
        bool push(const int &data);
        bool pop(int &data);
        bool top(int & data);
};

bool Stack::push(const int &data)
{   
     list.addtohead(data);
     cout << data << " pushed" << endl;
     return true;
}

bool Stack::pop(int &data)
{
    if(!list.isEmpty())
    {
        data = list.removefromhead();
        cout<< data << " popped" <<endl;
        return true;
    }   
    else
        cout<<"The list is empty!"<<endl;
        return false;
}

bool Stack::top(int &data)
{
    if(!list.isEmpty())
    {
        data = list.getheadptr()->data;
        cout<<"Top is "<< data <<endl;
        return true;
    }
    else
        cout << "The stack is empty."<< endl;
        return false;
}