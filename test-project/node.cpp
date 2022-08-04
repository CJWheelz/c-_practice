//
//  node.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/4/22.
//
#include <iostream>

#include "node.hpp"


Node::Node(int value) {
    this->value = value;
}

void Node::printNode() {
    std::cout << value;
}

void Node::append(Node* node) {
    if (next != NULL) {
        next->previous = node;
        node->next = next;
    }
    
    node->previous = this;
    next = node;
}

void Node::insert(Node *node) {
    if (previous != NULL) {
        previous->next = node;
        node->previous = previous;
    }
    
    
    node->next = this;
    
    previous = node;
}


Node* Node::getNext() {
    return next;
}

void Node::printList() {
    Node* temp = this;
    printNode();
    std::cout << " <-> ";
    
    // print forwards
    while (temp->next != NULL) {
        temp = temp->next;
        
        temp->printNode();
        std::cout << " <-> ";
        
    }
    std::cout << "NULL || NULL";
    
    while (temp != NULL) {
        std::cout << " <-> ";
        temp->printNode();


        temp = temp->previous;
    }
    
    std::cout << "\n";
    
    
   
}
