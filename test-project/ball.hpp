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
    bool isBouncing = false;
    
public:
    Ball(double rad, std::string clr);
    
    void get_info();
    
    void start_bouncing();
    void stop_bouncing();
    
};

#endif /* ball_hpp */
