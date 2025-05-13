#ifndef STACK_H
#define STACK_H


class Stack
{
    private:
        int* buffer;
        int capacity;
        int top_index;
        int size ;
        

    public:

        Stack(int size) ;
       ~Stack() ;
        void push(int val) ;
        void pop() ;
        int top() const ;
        void print() const ;
        bool is_empty() const ;
        bool is_full() const ;


};

#endif