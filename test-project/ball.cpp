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
    
    isBouncing ? std::cout << "The ball is bouncing!\n" : std::cout << "The ball is not bouncing :(\n";
}

void Ball::start_bouncing() {
    isBouncing = true;
}

void Ball::stop_bouncing() {
    isBouncing = false;
}
