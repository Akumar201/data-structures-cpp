#include "queue.h"
#include <iostream>


int main()
{

    queue q(5);
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(40);
    q.pop() ;
    q.pop() ;

    int a = q.front_val() ;
    std::cout << a << std::endl ;

    return 0 ;
}