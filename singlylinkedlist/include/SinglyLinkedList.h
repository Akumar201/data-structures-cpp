#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H


class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void insert_front(int value);
    void insert_back(int value);
    bool delete_value(int value);
    bool find(int value) const;
    void print() const;

private:
    struct Node {
        int data;
        Node* next;
        Node(int val);
    };

    Node* head;
};

#endif
