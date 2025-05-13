#include "DoubleLinkedList.h"


int main()
{

    DoubleLinkedList list ;
    list.push_front(10);
    list.push_front(20);
    list.print_forward() ;
    list.print_backward() ;

}