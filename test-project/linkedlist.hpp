//
//  linkedlist.hpp
//  test-project
//
//  Created by CJ Wheelan on 8/5/22.
//

#ifndef linkedlist_hpp
#define linkedlist_hpp

#include <stdio.h>

struct Node {
    int value;
    Node* previous;
    Node* next;
};

class LinkedList {
    int size;
    Node* head;
    Node* tail;
    
public:
    LinkedList();
    
    int getSize();
    
    void addFront(int value);
    void addBack(int value);
    
    int popFront();
    int popBack();
    
    void printList();
    void clearList();
    
    void printListDetail();
    
private:
    void printNode(Node* node);
    void printNodeDetail(Node* node);
    void insert(Node* baseNode, Node* newNode);
    void append(Node* baseNode, Node* newNode);
    Node* createNode(int value);
};

#endif /* linkedlist_hpp */
