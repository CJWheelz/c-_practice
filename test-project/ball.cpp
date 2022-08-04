//
//  ball.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/4/22.
//

#include "ball.hpp"

Ball::Ball(double rad, std::string clr) : Sphere(rad) {
//    radius = rad;
    color = clr;
}

void Ball::get_info() {
    Sphere::get_info();
    std::cout << "Color: " << color << "\n";
}
