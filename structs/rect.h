#pragma once
#include <iostream>
#include "point.h"

#ifndef RECT_H
#define RECT_H

struct Rect {
    Point2D position;
    float sideLength;

    friend std::ostream& operator << (std::ostream& stream, Rect rect);
};

Rect readRect();

float getPerimeter(Rect* rect);
float getArea(Rect* rect);

bool isPointInRect(Rect* rect, Point2D* point);
bool isPointOnRect(Rect* rect, Point2D* point);

void outputRect(Rect* rect);

#endif