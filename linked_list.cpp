#include "linked_list.h"
#include <iostream>

Node::Node() : next(nullptr)
{}

LinkedList::LinkedList() : head(nullptr)
{}

LinkedList::~LinkedList() {
    Node* current = head;

    while (current != nullptr) {
        Node* tmp = current->next;
        delete current;

        current = tmp;
    }
}

Node* LinkedList::insert_back(float info) {
    Node* new_node = new Node();
    new_node->info = info;

    if (head == nullptr) {
        head = new_node;

        return new_node;
    }

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = new_node;

    return new_node;
}

bool LinkedList::is_empty() {
    return head == nullptr;
}

int LinkedList::length() {
    int qtty = 0;

    Node* current = head;

    while (current != nullptr) {
        qtty++;
        current = current->next;
    }

    return qtty;
}

Node* LinkedList::search(float value) {
    Node* current = head;

    while (current != nullptr && current->info != value) {
        current = current->next;
    }

    return current;
}

void LinkedList::remove(float value) {

    if (is_empty()) {
        return;
    }

    if (head->info == value) {
        Node* tmp = head;
        head      = head->next;

        delete tmp;
        return;
    }

    Node* previous = head;
    Node* current  = head->next;

    while (current != nullptr && current->info != value) {
        previous = current;
        current  = current->next;
    }

    if (current != nullptr) {
        previous->next = current->next;
        delete current;
    }
}


Node* LinkedList::insert_front(float info) {

    Node* new_node = new Node();
    new_node->info = info;

    new_node->next = head;
    head           = new_node;

    return new_node;
}

void LinkedList::print() {
    if (is_empty()) {
        return;
    }
    std::cout << "-----" << std::endl;
    for (Node* node = head; node != nullptr; node = node->next) {
        std::cout << node->info << std::endl;
    }
}
