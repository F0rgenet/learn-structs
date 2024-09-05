#pragma once
#include "point.h"

#ifndef CIRCLE_H
#define CIRCLE_H

struct Circle {
    Point2D center;
    float radius;
};

Circle readCircle();
float getCircleLength(const Circle* circle);
float getCircleArea(const Circle* circle);

float isPointInCircle(const Circle* circle, const Point2D* point);
float isPointOnCircle(const Circle* circle, const Point2D* point);

void outputCircle(const Circle* circle);

#endif