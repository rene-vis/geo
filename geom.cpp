#include <iostream>
#include "geom.h"

_GEOM_BEGIN

void hello() {
    std::cout << "hello, this is geo\n";        
}

Vec2d::Vec2d(double x, double y) :x(x), y(y) {
}

_GEOM_END