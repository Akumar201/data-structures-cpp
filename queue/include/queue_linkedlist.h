#ifndef QUEUE_LINKEDLIST_H
#define QUEUE_LINKEDLIST_H

class queue_linkedlist
{

private:
    struct Node {
        int data ;
        Node* next ;
        Node(int data, Node* next = nullptr) ;
    } ;

    Node* head ;
    Node* tail ;

    int count ;


public:
    queue_linkedlist() ;
    ~queue_linkedlist() ;
  
    void push(int val) ;
    void pop() ;
    bool is_empty() const ;
    int front() const ;

};

#endif