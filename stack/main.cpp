#include "Stack.h"
#include "Stack_linkedlist.h"
#include "Stack_queue.h"
#include <iostream>

int main(){
    StackQueue s ;
    for(int i = 0 ; i < 10 ; i ++)
    {   
        std::cout << i << std::endl;
        s.push(i);
    }
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // s.push(40);
    // s.pop() ;
    int val = s.top() ;
   

    std::cout << "val  " << val << std::endl ;


    return 0 ;
}