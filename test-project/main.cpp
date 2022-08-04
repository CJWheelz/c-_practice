//
//  main.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/3/22.
//

#include <iostream>

#include "sphere.hpp"
#include "ball.hpp"

void print_divider() {
    std::cout << "--------------------------\n";
}

int main(int argc, const char * argv[]) {
    
    Sphere sphere(2);
    sphere.get_info();
    
    print_divider();
    
    sphere.set_radius(3);
    sphere.get_info();
    
    print_divider();
    
    Sphere sphere2;
    sphere2.get_info();
    
    print_divider();
    std::cout << "BALL:\n";
    
    Ball ball(3, "Red");
    ball.get_info();
    
    return 0;
}
