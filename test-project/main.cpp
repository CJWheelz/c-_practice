//
//  main.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/3/22.
//

#include <iostream>

//#include "sphere.hpp"
//#include "ball.hpp"
//#include "node.hpp"
#include "linkedlist.hpp"


int main() {
    LinkedList list;
    
//    list.printListDetail();

    list.addBack(1);
    list.addBack(2);
    list.addFront(0);
    list.addBack(3);
    list.addFront(-1);
    
    list.printListDetail();
//    list.printList();
    
//    list.popFront();
//    list.popFront();
//    list.popFront();
//    list.popFront();
//    list.popFront();
    
    list.popBack();
    list.popBack();
    list.popBack();
    list.popBack();
    list.popBack();
    
    std::cout << "Size: " << list.getSize() << "\n";
//
//    while (list.getSize() != 0) {
//        std::cout << "Popped: " << list.popFront() << "\n";
//        list.printList();
//        std::cout << "Size: " << list.getSize() << "\n";
//    }
//
//    list.addBack(9);
//    list.addFront(8);
//    list.addFront(7);
//    list.addBack(10);
//    list.printList();
//    std::cout << "Size: " << list.getSize() << "\n";
//
//    list.popBack();
//    list.printList();
//    list.popFront();
//    list.printList();
//    list.popBack();
//    list.printList();
//    list.popFront();
//    list.printList();
//    list.popBack();
//    list.printList();
//
//    list.clearList();
//    std::cout << "Size: " << list.getSize() << "\n";
//
//    list.printList();
    
}

//void print_divider() {
//    std::cout << "--------------------------\n";
//}
//
//int main(int argc, const char * argv[]) {
//
//    Sphere sphere(2);
//    sphere.get_info();
//
//    print_divider();
//
//    sphere.set_radius(3);
//    sphere.get_info();
//
//    print_divider();
//
//    Sphere sphere2;
//    sphere2.get_info();
//
//    print_divider();
//
//
//    // BALL
//    std::cout << "BALL:\n";
//
//    Ball ball(3, "Red");
//    ball.get_info();
//
//    print_divider();
//
//    ball.start_bouncing();
//    ball.get_info();
//
//    print_divider();
//
//    return 0;
//}
