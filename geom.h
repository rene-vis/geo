#pragma once

#define _GEOM_BEGIN namespace geom{
#define _GEOM_END }

_GEOM_BEGIN

void hello();

class Vec2d{
public:
    Vec2d(double x, double y);

private:
    double x, y;
};

_GEOM_END