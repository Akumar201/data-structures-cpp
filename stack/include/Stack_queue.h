#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H
#include <queue>

class StackQueue
{
    private:
        std::queue<int> my_queue;

    public:
        StackQueue() ;
        ~StackQueue() ;
        void push(int val) ;
        void pop() ;
        int top() const ;
        bool is_empty() const;

};


#endif