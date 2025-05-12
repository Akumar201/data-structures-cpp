#include "SinglyLinkedList.h"

int main() {
    SinglyLinkedList list;
    list.insert_back(10);
    list.insert_front(5);
    list.insert_back(20);
    list.print(); // 5 -> 10 -> 20 -> nullptr

    list.delete_value(10);
    list.print(); // 5 -> 20 -> nullptr


    return 0;
}
