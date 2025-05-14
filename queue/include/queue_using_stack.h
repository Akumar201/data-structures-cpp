#ifndef QUEUE_USING_STACKS_H
#define QUEUE_USING_STACKS_H

#include <stack>

class QueueUsingStacks {
private:
    std::stack<int> stack1, stack2;

public:
    QueueUsingStacks();
    ~QueueUsingStacks();


    void enqueue(int x);     // Costly enqueue
    void dequeue();          // Cheap dequeue
    int front();             // Get the front element
    bool is_empty() const;   // Check if queue is empty
    int size() const;        // Get size of queue
};

#endif // QUEUE_USING_STACKS_H
