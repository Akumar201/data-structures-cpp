#include "DoubleLinkedList.h"
#include <iostream>

DoubleLinkedList::Node::Node(int val) : data(val), next(nullptr), prev(nullptr) {}

DoubleLinkedList::DoubleLinkedList() : head(nullptr), tail(nullptr) {}

DoubleLinkedList::~DoubleLinkedList() 
{
    Node* current = head ;

    while(current)
    {
        Node* to_delete = current ;
        current = current->next ;
        delete to_delete ;
    }
    head = nullptr;
}


void DoubleLinkedList::push_front(int val) 
{   
    Node* current  = new Node(val) ;
    current -> next = head ;
    if (head != nullptr) 
    {
        head->prev = current;
    }

    if (tail == nullptr) 
    {
    tail = current;
    }

    head = current;
    // delete cuurent ; 
}

void DoubleLinkedList::push_back(int val)
{
    if(head == nullptr)
    {
        Node* first = new Node(val) ;
        head = first ;
        return ;
    }
    Node* current = head ;
    while(current->next !=nullptr)
    {
        current = current->next ;
    }
    Node* last = new Node(val) ;
    current->next = last ;
    last->prev = current ;
    tail = last;
}

void DoubleLinkedList::print_forward()
{
    Node* current = head ;
    while(current)
    {
        std::cout << current->data << std::endl ;
        current = current->next ;
    } 

}

void DoubleLinkedList::print_backward()
{
    
    Node* current = tail ;
    while(current != nullptr)
    {
        std::cout << current->data << std::endl ;
        current = current->prev ;
    }


}

