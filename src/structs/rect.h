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

float getPerimeter(const Rect* rect);
float getArea(const Rect* rect);

bool isPointInRect(const Rect* rect, const Point2D* point);
bool isPointOnRect(const Rect* rect, const Point2D* point);

void outputRect(const Rect* rect);

#endif