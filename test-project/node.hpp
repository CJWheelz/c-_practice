//
//  node.hpp
//  test-project
//
//  Created by CJ Wheelan on 8/4/22.
//

#ifndef node_hpp
#define node_hpp

#include <stdio.h>

class Node {
    int value;
    Node* previous = NULL;
    Node* next = NULL;
    
public:
    Node(int value);
    void printNode();
    void append(Node* node);
    void insert(Node* node);
    
    Node* getNext();
    
    void printList();
};

#endif /* node_hpp */
