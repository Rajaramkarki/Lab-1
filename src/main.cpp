#include"linkedlist.h"
#include"Stack.h"
#include"queue.h"
#include<iostream>

using namespace std;


int main()
{
    cout<<"For linkedlist:"<<endl;
    linkedlist list;
    Node *n = nullptr;
    int i;

    list.traverse();
    list.addtohead(5);
    list.addtohead(10);
    list.addtohead(15);
    list.addtotail(0);
    list.traverse();
    list.removefromhead();
    list.traverse();
    list.removefromtail();
    list.traverse();
    list.addtotail(50);
    list.traverse();
    list.remove(50);
    list.traverse();
    list.search(5);
    list.retrieve(10,n);
    // list.add(100,n);
    list.traverse();


    cout<<endl;
    cout<<"For Stack:"<<endl;
    int j;
    Stack s;

    s.top(j);
    s.push(10);
    s.top(j);
    s.push(15);
    s.top(j);  
    s.pop(j);
    s.top(j);

    cout<<endl;
    cout<<"For Queue:"<<endl;
    int k;
    Queue a;

    a.front(k);
    a.enqueue(15);
    a.enqueue(10);
    a.enqueue(5);
    a.enqueue(2);
    a.front(k);
    a.rear(k);
    a.dequeue(k);

}