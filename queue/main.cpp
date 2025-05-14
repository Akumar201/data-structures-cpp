#include "queue.h"
#include "queue_linkedlist.h"

#include <iostream>


int main()
{

    queue_linkedlist q;
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(40);
    q.pop() ;

    int a = q.front() ;
    std::cout << a << std::endl ;

    return 0 ;
}