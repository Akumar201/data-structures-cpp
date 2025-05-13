#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

class DoubleLinkedList
{
    private:

    struct Node
    {
        int data ;
        Node* next ;
        Node* prev ;
        Node(int val) ;
    } ;

    Node* head ;
    Node* tail ;

    public:

    DoubleLinkedList() ; // constructor
    ~DoubleLinkedList() ; // Destructor 

    void push_front(int val) ;
    void push_back(int val) ;
    void print_forward() ;
    void print_backward() ;
    bool delete_value(int val) ;


};
#endif