#pragma once

class Node{
    public:
        int data;
        Node * next;

        Node() : next(nullptr) {}
        Node(int data, Node *next): data(data), next(next){}
};

class linkedlist{
    public:
        linkedlist();

        bool isEmpty();
        void addtohead(int data);
        void addtotail(int data);
        void traverse(char separator = ' ');
        bool search(int data);
        int removefromhead();
        int removefromtail();
        void remove(int data);
        void add(int data, Node *predescessor);
        bool retrieve(int data, Node *outputNodePointer);
        Node *getheadptr(){return headptr;}
        Node *gettailptr(){return tailptr;}


    private:
        Node * headptr;
        Node * tailptr;
};