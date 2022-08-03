//
//  main.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/3/22.
//

#include <iostream>

#include "sphere.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Sphere sphere(2.2);

    std::cout << sphere.get_radius() << "\n";
    
    return 0;
}
