#include <iostream>
#include <cmath>
#include "circle.h"
#include "rect.h"

bool checkInclusion(Circle* circleA, Circle* circleB) {
    float dx = circleA->center.x - circleB->center.x;
    float dy = circleA->center.y - circleB->center.y;
    float distance = std::sqrt(dx * dx + dy * dy);
    return distance + circleB->radius < circleA->radius;
}

bool checkInclusion(Rect* rectA, Rect* rectB) {
    return (rectB->position.x >= rectA->position.x &&
            rectB->position.x + rectB->sideLength <= rectA->position.x + rectA->sideLength &&
            rectB->position.y <= rectA->position.y &&
            rectB->position.y - rectB->sideLength >= rectA->position.y - rectA->sideLength);
}

bool checkInclusion(Rect* rectA, Circle* circleB) {
    return (circleB->center.x - circleB->radius >= rectA->position.x &&
            circleB->center.x + circleB->radius <= rectA->position.x + rectA->sideLength &&
            circleB->center.y + circleB->radius <= rectA->position.y &&
            circleB->center.y - circleB->radius >= rectA->position.y - rectA->sideLength);
}

bool checkInclusion(Circle* circleA, Rect* rectB) {
    float dx1 = rectB->position.x - circleA->center.x;
    float dy1 = rectB->position.y - circleA->center.y;
    float dx2 = rectB->position.x + rectB->sideLength - circleA->center.x;
    float dy2 = rectB->position.y - rectB->sideLength - circleA->center.y;
    return (dx1 * dx1 + dy1 * dy1 < circleA->radius * circleA->radius &&
            dx2 * dx2 + dy2 * dy2 < circleA->radius * circleA->radius);
}