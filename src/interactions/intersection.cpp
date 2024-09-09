#include <iostream>
#include <cmath>
#include "circle.h"
#include "rect.h"
#include "../utils/math.h"

bool checkIntersection(Rect* rectA, Rect* rectB) {
    return !(rectA->position.x + rectA->sideLength < rectB->position.x ||
             rectB->position.x + rectB->sideLength < rectA->position.x ||
             rectA->position.y < rectB->position.y - rectB->sideLength ||
             rectB->position.y < rectA->position.y - rectA->sideLength);
}

bool checkIntersection(Circle* circleA, Circle* circleB) {
    float dx = circleA->center.x - circleB->center.x;
    float dy = circleA->center.y - circleB->center.y;
    float distance = std::sqrt(dx * dx + dy * dy);
    return distance < (circleA->radius + circleB->radius);
}

bool checkIntersection(Rect* rectA, Circle* circleB) {
    float closestX = clamp(circleB->center.x, rectA->position.x, rectA->position.x + rectA->sideLength);
    float closestY = clamp(circleB->center.y, rectA->position.y - rectA->sideLength, rectA->position.y);
    float dx = circleB->center.x - closestX;
    float dy = circleB->center.y - closestY;
    return (dx * dx + dy * dy) < (circleB->radius * circleB->radius);
}