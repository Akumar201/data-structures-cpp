#include "CircularBuffer.h"
#include <iostream> 

CircularBuffer::CircularBuffer(int size): capacity(size) , head(0), tail(0), count(0)
{
    buffer = new int[capacity];
}

CircularBuffer::~CircularBuffer()
{

    delete[] buffer ;
}

bool CircularBuffer::enqueue(int val)
{
    if(is_full())
    {
        return false;
    }

    buffer[tail] = val ;
    tail = (tail + 1) % capacity ;
    ++count;
    return true ;

}
// overwritting as soon as we are getting new values
// void CircularBuffer::enqueue(int val) {
//     buffer[tail] = val;

//     if (is_full()) {
//         head = (head + 1) % capacity;  // Overwrite the oldest
//     } else {
//         ++count;
//     }

//     tail = (tail + 1) % capacity;
// }

bool CircularBuffer::dequeue(int& out)
{
    if(is_empty())
    {
        return false;
    }
    out = buffer[head] ;
    head = (head + 1) % capacity ;
    count-- ;
    return true ;
}

bool CircularBuffer::is_full() const
{
    return count == capacity ;
}

bool CircularBuffer::is_empty() const 
{
    return count == 0 ;
}

void CircularBuffer::print() const
{
    if(is_empty())
    {
        return ; 
    }

    std::cout << "Buffer: ";
    for (int i = 0, idx = head; i < count; ++i) {
        std::cout << buffer[idx] << " ";
        idx = (idx + 1) % capacity;
    }
    std::cout << "\n";

}