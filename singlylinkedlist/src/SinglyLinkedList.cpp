#include <iostream>
#include "SinglyLinkedList.h"

// Node constructor
SinglyLinkedList::Node::Node(int val) : data(val), next(nullptr) {}

SinglyLinkedList::SinglyLinkedList() : head(nullptr) {}

SinglyLinkedList::~SinglyLinkedList() {
    Node* current = head;
    while (current) {
        Node* to_delete = current;
        current = current->next;
        delete to_delete;
    }
}

void SinglyLinkedList::insert_front(int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void SinglyLinkedList::insert_back(int value) {
    Node* new_node = new Node(value);
    if (!head) {
        head = new_node;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = new_node;
}

bool SinglyLinkedList::delete_value(int value) {
    if (!head) return false;

    if (head->data == value) {
        Node* to_delete = head;
        head = head->next;
        delete to_delete;
        return true;
    }

    Node* current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }

    if (!current->next) return false;

    Node* to_delete = current->next;
    current->next = current->next->next;
    delete to_delete;
    return true;
}


bool SinglyLinkedList::find(int value) const {
    Node* current = head;
    while (current) {
        if (current->data == value) return true;
        current = current->next;
    }
    return false;
}

void SinglyLinkedList::print() const {
    Node* current = head;
    while (current) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}
