#include <iostream>
#include "queue.h"

queue::queue(int size) : front(0) , count(0), back(0), capacity(size)
{
    buffer = new int[size] ;
}

queue::~queue()
{
    delete[] buffer ;
}

void queue::push(int val)
{
    if(is_full())
    {
        std::cerr << "queue is already full" << std::endl ;
        return ;
    }

    buffer[back] = val ;
    back = (back + 1) % capacity ;
    count++ ;
}

void queue::pop()
{
    if(is_empty())
    {
        std::cerr << "queue is already empty" << std::endl ;
        return ;
    }

    front = ( front + 1 ) % capacity ;
    count -- ;
}


int queue::front_val() const
{
     if(is_empty())
    {
        std::cerr << "queue is already empty" << std::endl ;
        return  0 ;
    }

    return buffer[front] ;
}

bool queue::is_full() const
{
    return count == capacity;
}
bool queue::is_empty() const
{
    return (count == 0) ;
}