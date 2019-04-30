#include <iostream>

#include "linked_list.h"

int main()
{
    Node* lista = new Node();

    LinkedList list;

    list.insert_front(10);
    list.insert_front(20);
    list.insert_front(30);
    list.insert_front(40);
    list.insert_back(25);

    if (list.search(25)) {
        std::cout << "Encontrado o valor 25" << std::endl;
    }
    list.print();

    list.remove(10);
    list.print();
    list.remove(20);
    list.print();
    list.remove(30);
    list.print();
    list.remove(40);
    list.print();
    list.remove(25);
    list.print();
    list.remove(999);

    list.print();
}
