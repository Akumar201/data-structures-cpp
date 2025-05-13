#include "Stack.h"
#include <iostream>
Stack::Stack(int size) : capacity(size), top_index(-1)
{
    buffer = new int[capacity];  
}

Stack::~Stack()
{
    delete[] buffer ;
}

void Stack::push(int val)
{
    if(is_full())
    {
        throw std::overflow_error("Stack overflow");
        return ; 
    }
    buffer[++top_index] = val ;
}

void Stack::pop() 
{
    if(is_empty())
    {
        throw std::underflow_error("Stack underflow");
        return ;
    }
    top_index-- ;
}

int Stack::top() const
{
    if(is_empty())
    {
        throw std::underflow_error("Stack underflow");
        return 0 ;
    }
    return buffer[top_index] ;
}


bool Stack::is_full() const
{
    return (top_index == capacity -1) ;
}

bool Stack::is_empty() const
{
    return (top_index == -1) ; 
}