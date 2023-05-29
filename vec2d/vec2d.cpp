#include <iostream>
#include "vec2d.h"

_GEOM_BEGIN

void hello() {
    std::cout << "hello, this is geo\n";        
}

Vec2d::Vec2d(double x, double y) :x(x), y(y) {
}

double Vec2d::dot(Vec2d& v2) {
    return x * v2.x + y * v2.y;
}

double Vec2d::cross(Vec2d& v2) {
    return x * v2.y - v2.x * y;
}

_GEOM_END