#include <iostream>
#include "geom.h"

_GEOM_BEGIN

void hello() {
    std::cout << "hello, this is geo\n";        
}

Vec2d::Vec2d(double x, double y) :x(x), y(y) {
}

double Vec2d::Dot(Vec2d& v2) {
    return x * v2.x + y * v2.y;
}

_GEOM_END