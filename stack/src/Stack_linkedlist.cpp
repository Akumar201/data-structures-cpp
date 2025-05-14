#include <iostream>
#include "Stack_linkedlist.h"


Stack_linkedlist::Stack_linkedlist() : head(nullptr) , count(0) {}

Stack_linkedlist::~Stack_linkedlist()
{
   Node* current = head ;
    while(current != nullptr)
    {
        Node* temp = current ;
        current = current->next ;
        delete temp ;
    }

}

Stack_linkedlist::Node::Node(int data, Node* next) : data(data), next(next){}

void Stack_linkedlist::push(int val)
    {
        Node* current = head ;
        Node* my_val = new Node(val, nullptr) ; 
        head = my_val ;
        head->next = current ;
        count++ ;
    }

void Stack_linkedlist::pop()
    {
        if(is_empty())
        {
            std::cerr << "Stack underflow" ;
            return ;
        }

        Node* to_delete = head ;
        head = head->next ;
        count -- ;
        delete to_delete ;
    }


bool Stack_linkedlist::is_empty() const
{
    return (count == 0) ;
}

int Stack_linkedlist::top() const
{
    if(is_empty())
    {
        std::cerr << "Stack underflow" ;
        return 0;
    }
    return head->data ; 
}