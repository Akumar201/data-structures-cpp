#include <iostream>
#include "queue_linkedlist.h"


queue_linkedlist::queue_linkedlist() : head(nullptr) , tail(nullptr), count(0) {}


queue_linkedlist::Node::Node(int data, Node* next) : data(data) , next(next){}

queue_linkedlist::~queue_linkedlist()
{
    Node* current = head ;
    while(current != nullptr)
    {
        Node* node_to_delete = current ;
        current = current->next ;
        delete node_to_delete ;
    }

}


void queue_linkedlist::push(int val)
{

    Node* new_node = new Node(val);
    if (is_empty()) {
        head = tail = new_node; 
    } else {
        tail->next = new_node;
        tail = new_node;
    }

    count ++ ;
}

void queue_linkedlist::pop()
{
    
    if(is_empty())
    {
        std::cerr << "Queue already empty " << std::endl ;
        return ;
    }
    
    Node* current = head ;
    head = head->next ;
    delete current ;
    count -- ;

    if (head == nullptr) {
        tail = nullptr;
    }

}

int queue_linkedlist::front() const
{
    if(is_empty())
    {
        std::cerr << "Queue already empty " << std::endl ;
        return 0 ;
    }

    return head->data ;

}

bool queue_linkedlist::is_empty() const
{
    return (count == 0) ;
}

