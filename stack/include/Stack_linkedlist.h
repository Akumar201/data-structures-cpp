#ifndef STACK_LINKEDLIST_H
#define STACK_LINKEDLIST_H



class Stack_linkedlist{
    private:
        
        struct Node
        {
            int data ;
            Node* next ;
            Node(int data, Node* next = nullptr) ;
        };

        Node* head ;

        int count ;



    public:
    Stack_linkedlist() ;
    ~Stack_linkedlist() ;
    void push(int val) ;
    void pop() ;
    int top() const ;
    bool is_empty() const ;

};


#endif