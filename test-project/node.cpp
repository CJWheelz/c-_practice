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
    std::cout << value << "\n";
}

void Node::add(Node* node) {
    next = node;
}
