//
//  sphere.hpp
//  test-project
//
//  Created by CJ Wheelan on 8/3/22.
//

#ifndef sphere_hpp
#define sphere_hpp

#include <iostream>

class Sphere {
protected:
    double radius;
    double const pi = 3.1415;
    
public:
    Sphere(double rad = 1);
    
    void set_radius(double rad);
    
    double get_radius();
    double get_area();
    double get_volume();
    
    void get_info();
};

#endif /* sphere_hpp */
