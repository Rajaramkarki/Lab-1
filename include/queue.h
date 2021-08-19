#include<iostream>
#include "linkedlist.h"
using namespace std;

class Queue{
    linkedlist list;

    public:
        bool enqueue(const int &data);
        bool dequeue(int &data);
        bool front(int &data);
        bool rear(int &data);
};


bool Queue::enqueue(const int &data)
{
    list.addtotail(data);
    cout<< data << " added to queue" << endl;
    return true;
}

bool Queue::dequeue(int &data)
{
    if(!list.isEmpty())
    {
        data = list.removefromhead();
        cout<< data << " removed from queue" << endl;
        return true;
    }
     else
     {
         cout<< "Queue is empty"<<endl;
         return false;
     }
}

bool Queue::front(int &data)
{
    if(!list.isEmpty())
    {
        data = list.getheadptr()->data;
        cout<< data << " is in the front" << endl;
        return true;
    }
    else
    {
        cout<< "Queue is empty"<<endl;
        return false;
    }
}

bool Queue::rear(int &data)
{
     if(!list.isEmpty())
    {
        data = list.gettailptr()->data;
        cout<< data << " is in the rear" << endl;
        return true;
    }
    else
    {
        cout<< "Queue is empty"<<endl;
        return false;
    }
}