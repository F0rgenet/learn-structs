#include <iostream>
#include <cmath>
#include "point.h"
#include "input.h"

struct Rect {
    Point2D position = Point2D{};
    float sideLength = 0;

    friend std::ostream& operator << (std::ostream& stream, const Rect rect) {
        stream << "Rect(position=" << rect.position << ", sideLength=" << rect.sideLength << ")" << std::endl;
        return stream;
    }
};


Rect readRect() {
    Rect rect {};
    std::cout << "Input Circle center >" << std::endl;
    rect.position = readPoint2D();
    rect.sideLength = userValueInput("Enter Circle radius: ");
    return rect;
}


float getPerimeter(const Rect* rect) {
    return rect -> sideLength * 4;
}

float getArea(const Rect* rect) {
    return static_cast<float>(pow(rect->sideLength, 2));
}


bool isPointInRect(const Rect* rect, const Point2D* point) {
    return (rect->position.x < point->x < rect->position.x + rect->sideLength) &&
        (rect->position.y < point->y < rect->position.y - rect->sideLength);
}

bool isPointOnRect(const Rect* rect, const Point2D* point) {
    return (rect->position.x == point->x || rect->position.x == point->x + rect->sideLength) ||
        (rect->position.y == point->y || rect->position.y == point->y - rect->sideLength);
}

void outputRect(const Rect* rect) {
    std::cout << *rect;
}
