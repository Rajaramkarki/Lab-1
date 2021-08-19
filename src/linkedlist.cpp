#include"linkedlist.h"
#include<iostream>

using namespace std;

linkedlist::linkedlist() {
    headptr = nullptr;
    tailptr = nullptr;
}

void linkedlist::traverse(char separator)
{
    if(isEmpty())
    {
        cout<<"The list is empty."<<endl;
    }
    else{
        Node *temp = headptr;

        while(temp != nullptr)
        {
            cout<< temp -> data << separator;
            temp = temp->next;
        }
        cout<<endl;
    }
}

bool linkedlist::isEmpty() {
    return headptr == nullptr && tailptr == nullptr;
}


void linkedlist::addtohead(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = headptr;
    headptr = newNode;

    if(tailptr == nullptr){
        tailptr = headptr;
    }
}

void linkedlist::addtotail(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if(headptr == nullptr)
        headptr = tailptr = newNode;

    else
    {
        tailptr -> next = newNode;
        tailptr = tailptr -> next;
    }
}

void linkedlist::add(int data, Node *predescessor)
{
    Node *newNode = new Node(data, predescessor->next);
    // newNode->data = data;
    // newNode->next = predescessor->next;
    predescessor->next = newNode;
}

int linkedlist::removefromhead() 
{
    if(!isEmpty())
    {
        Node *nodetodelete = headptr;
        headptr = nodetodelete -> next;
        int info = nodetodelete->data;
        delete nodetodelete;

        if(headptr == nullptr)
        {
            tailptr == nullptr;
        }
        

        return info;
    }
    else{
        return isEmpty();
    }
} 

int linkedlist::removefromtail() 
{
    if(!isEmpty())
    {
        Node *nodetodelete = tailptr;
        
        if(headptr == tailptr)
        {
            headptr = tailptr = nullptr;
        }
        else{
            Node *pred = headptr;
            while(pred -> next != tailptr)
            {
                pred = pred->next;
            }
            tailptr = pred;
            pred->next = nullptr;
        }
        int info = nodetodelete->data;
        delete nodetodelete;
        
        return info;
    }
    else{
        return isEmpty();
    }
} 

void linkedlist::remove(int data)
{
    if(!isEmpty())
    {
        if(headptr->data == data)
            removefromhead();

        else
        {
            Node *temp = headptr->next;
            Node *prev = headptr;

            while(temp!=NULL)
            {
                if(temp->data == data)
                    break;

                else
                {
                    prev = prev->next;
                    temp = temp->next;
                }
            }
            if(temp!=NULL)
            {
                prev->next = temp->next;
                delete temp;
                if(prev->next==NULL)
                {
                    tailptr = prev;
                }
            }
        }
    }
}

bool linkedlist::retrieve(int data, Node *outputNodePointer)
{
    Node * temp = headptr;
    while(temp!=nullptr && temp->data != data)
    {
        temp = temp->next;
    }
    
    if(temp==nullptr)
    {
        cout<<data<<"doesn't exist in the list"<<endl;
        return false;

    }
        
    else
    {
        outputNodePointer = temp;
        cout<<data<<" found"<<endl;
        return true;
    }
}

bool linkedlist::search(int data)
{
    Node *temp = headptr;
    while (temp != nullptr && temp->data != data)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << data <<" element is not in the list" << endl;
        return false;
    }
    else
    {

        cout << data << " is in the list" << endl;
        return true;
    }
}