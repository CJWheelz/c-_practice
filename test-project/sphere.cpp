//
//  sphere.cpp
//  test-project
//
//  Created by CJ Wheelan on 8/3/22.
//

#include "sphere.hpp"
#include <cmath>

Sphere::Sphere(double rad) {
    radius = rad;
}

double Sphere::get_radius() {
    return radius;
}

double Sphere::get_area() {
    return 4 * pi * pow(radius, 2);
}

double Sphere::get_volume() {
    return 4 / 3 * pi * pow(radius, 3);
}

void Sphere::set_radius(double rad) {
    radius = rad;
}

void Sphere::get_info() {
    std::cout << "Radius: " << get_radius() << " units\n";
    std::cout << "Area: " << get_area() << " units^2\n";
    std::cout << "Volume: " << get_volume() << " units^3\n";
}
