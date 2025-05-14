#ifndef QUEUE_H
#define QUEUE_H

class queue 
{
    private:
        int* buffer ;
        int front ;
        int size ;
        int count ;
        int back ;
        int capacity ;


    public:
        queue(int size) ;
        ~queue() ;
        void push(int val) ;
        void pop() ;
        bool is_full() const ;
        bool is_empty() const ;
        int front_val() const ;
};



#endif