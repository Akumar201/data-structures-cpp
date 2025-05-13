#ifndef CIRCULARBUFFER_H
#define CIRCULARBUFFER_H

class CircularBuffer
{
    private:
        int* buffer;
        int capacity;
        int head;
        int tail;
        int count;
        
    public:
        CircularBuffer(int size);
        ~CircularBuffer();

        bool enqueue(int val);
        bool dequeue(int& out); // Output parameter
        bool is_full() const;
        bool is_empty() const;
        void print() const;
};



#endif