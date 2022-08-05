//
//  linkedlist.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/5/22.
//
#include <iostream>

#include "linkedlist.hpp"

// PUBLIC

LinkedList::LinkedList() {
    size = 0;
    head = NULL;
    tail = NULL;
}

int LinkedList::getSize() {
    return size;
}


void LinkedList::printListDetail() {
    Node* temp = head;
    
    std::cout << "Head: ";
    printNodeDetail(head);
    
    std::cout << "Tail: ";
    printNodeDetail(tail);
        
    while (temp != NULL) {
        printNodeDetail(temp);
        
        temp = temp->next;
    }
}


void LinkedList::addBack(int value) {
    
    Node* node = createNode(value);
    
    if (tail != NULL) {
        append(tail, node);
    } else {
        head = node;
    }
    
    tail = node;
    
    size++;
}

void LinkedList::addFront(int value) {
    
    Node* node = createNode(value);
    
    if (head != NULL) {
        insert(head, node);
    } else {
        tail = node;
    }
    
    head = node;
    
    size++;
    
}

int LinkedList::popFront() {
    if (head == NULL) {
        std::cout << "Error: pop from an empty list. Returning max int.\n";
        return INT_MAX;
    }
    
    Node* node = head;
    head = head->next;
    
    if (head == NULL) {
        tail = NULL;
    } else {
        head->previous = NULL;
    }
    
    size--;
    
    int value = node->value;
    delete node;
    
    return value;
}

int LinkedList::popBack() {
    if (tail == NULL) {
        std::cout << "Error: pop from an empty list. Returning max int.\n";
        return INT_MAX;
    }
    
    Node* node = tail;
    tail = tail->previous;
    
    if (tail == NULL) {
        head = NULL; // now empty list
    } else {
        tail->next = NULL;
    }
    
    size--;
    
    int value = node->value;
    delete node;
    
    return value;
}

void LinkedList::printList() {
    
    std::cout << "NULL <-> ";
    
    Node* temp = head;
    
    while (temp != NULL) {
        printNode(temp);
        std::cout << " <-> ";
        
        temp = temp->next;
    }
    
    std::cout << "NULL\n";
}

void LinkedList::clearList() {
    Node* current = head;
    Node* next;
    
    while (current != NULL) {
        next = current->next;
        
        delete current;
        
        current = next;
    }
    
    size = 0;
    head = NULL;
    tail = NULL;
}



// PRIVATE

void LinkedList::printNodeDetail(Node* node) {
    if (node == NULL) {
        std::cout << "NULL Node\n";
        return;
    }
    
    std::cout << node << ": Value: " << node->value << " | From " << node->previous << " to " << node->next << "\n";
}

void LinkedList::printNode(Node *node) {
    std::cout << node->value;
}

void LinkedList::insert(Node* baseNode, Node* newNode) {
    if (baseNode->previous != NULL) {
        baseNode->previous->next = newNode;
        newNode->previous = baseNode->previous;
    }
    
    newNode->next = baseNode;
    baseNode->previous = newNode;
}


void LinkedList::append(Node* baseNode, Node* newNode) {
    if (baseNode->next != NULL) {
        baseNode->next->previous = newNode;
        newNode->next = baseNode->next;
    }
    
    newNode->previous = baseNode;
    baseNode->next = newNode;
}

Node* LinkedList::createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->previous = NULL;
    node->next = NULL;
    
    return node;
}
