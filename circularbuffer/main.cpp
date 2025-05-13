#include "CircularBuffer.h"
#include <iostream>

int main()
{
    CircularBuffer cf(5) ;

    cf.enqueue(10);
    cf.enqueue(20);
    cf.enqueue(30);
    cf.enqueue(40);
    int x;
    cf.dequeue(x); std::cout << "Dequeued: " << x << "\n"; // 1
    cf.print() ;





}