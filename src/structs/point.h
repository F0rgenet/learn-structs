#pragma once
#include <iostream>

#ifndef POINT_H
#define POINT_H

struct Point2D {
    float x;
    float y;

    friend std::ostream& operator << (std::ostream& stream, const Point2D& point);
};

Point2D readPoint2D();

void outputPoint(const Point2D* point);

#endif