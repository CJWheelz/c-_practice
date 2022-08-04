//
//  ball.hpp
//  test-project
//
//  Created by CJ Wheelan on 8/4/22.
//

#ifndef ball_hpp
#define ball_hpp

#include <stdio.h>
#include "sphere.hpp"


class Ball: public Sphere {
    std::string color;
    bool isBouncing;
    
public:
    Ball(double rad, std::string clr);
    
    void get_info();
    
};

#endif /* ball_hpp */
