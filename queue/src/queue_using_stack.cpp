#include "queue_using_stacks.h"
#include <iostream>

QueueUsingStacks::QueueUsingStacks() {}
QueueUsingStacks::~QueueUsingStacks() {}


void QueueUsingStacks::enqueue(int x) 
{
    if(stack1.empty())
    {
        stack1.push(x) ;
    }
    else
    {
        while(!stack1.empty())
        {
            int s1 = stack1.top();
            stack2.push(s1) ;
            stack1.pop() ;
        }

        stack1.push(x) ;


        while(!stack2.empty())
        {
            int s2 = stack2.top() ;
            stack1.push(s2) ;
            stack2.pop() ;
        }

    }

}


void QueueUsingStacks::dequeue() {
    if (stack1.empty()) 
    {
        std::cerr << "Queue is empty\n";
        return;
    }

    stack1.pop() ;
}

int QueueUsingStacks::front() {
    
    if(stack1.empty())
    {
        std::cerr << "Queue is empty " << std::endl ; 
        return -1 ;
    }

    return stack1.top();
}

bool QueueUsingStacks::is_empty() const {
    if(!stack1.empty())
    {
        return false ;
    }
    return true;
}

int QueueUsingStacks::size() const {

    return stack1.size();
}
