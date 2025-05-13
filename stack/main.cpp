#include "Stack.h"
#include <iostream>



int main(){

   
    Stack s(5) ;
    s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    int val = s.top() ;

    std::cout << "val  " << val << std::endl ;


    return 0 ;
}