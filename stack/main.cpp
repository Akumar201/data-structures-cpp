#include "Stack.h"
#include "Stack_linkedlist.h"
#include <iostream>

int main(){
    Stack_linkedlist s ;
    for(int i   = 0 ; i < 1000 ; i ++)
    {   
        s.push(i);
    }
    // s.push(20);
    // s.push(30);
    // s.push(40);
    s.pop() ;
    int val = s.top() ;
   

    std::cout << "val  " << val << std::endl ;


    return 0 ;
}