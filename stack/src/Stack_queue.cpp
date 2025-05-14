#include "Stack_queue.h"
#include <iostream>


StackQueue::StackQueue() {}
StackQueue::~StackQueue() {}


void StackQueue::push(int val)
{
    my_queue.push(val) ;
    int n = my_queue.size() ;
    for (int i = 0; i < n - 1; i++) {
        my_queue.push(my_queue.front());
        my_queue.pop();
    }

}

void StackQueue::pop()
{
    if (my_queue.empty()) {
    std::cerr << "Stack underflow\n";
    return;
    }
    my_queue.pop() ;
}

int StackQueue::top() const
{
    if (my_queue.empty()) {
    std::cerr << "Stack underflow\n";
    return 0;
    }
    return my_queue.front() ;
}


bool StackQueue::is_empty() const
{
    return (my_queue.size() == 0);
}