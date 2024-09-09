#include <iostream>
#include <cmath>
#include "point.h"
#include "input.h"

struct Circle {
    Point2D center = Point2D{};
    float radius = 0;

    friend std::ostream& operator << (std::ostream& stream, const Circle circle) {
        stream << "Circle(radius=" << circle.radius << ", center=" << circle.center << ")" << std::endl;
        return stream;
    }
};

Circle readCircle() {
    Circle circle {};
    std::cout << "Input Circle center >" << std::endl;
    circle.center = readPoint2D();
    circle.radius = userValueInput("Enter Circle radius: ");
    return circle;
}

float getCircleLength(const Circle* circle) {
    return 2*circle->radius*static_cast<float>(M_PI);
}

float getCircleArea(const Circle* circle) {
    return static_cast<float>(pow(circle->radius, 2)*M_PI);
}

float isPointInCircle(const Circle* circle, const Point2D* point) {
    return pow(point->x-circle->center.x, 2)+pow(point->y-circle->center.y, 2) < pow(circle->radius, 2);
}

float isPointOnCircle(const Circle* circle, const Point2D* point) {
    return pow(point->x-circle->center.x, 2)+pow(point->y-circle->center.y, 2) == pow(circle->radius, 2);
}

void outputCircle(const Circle* circle) {
    std::cout << *circle;
}
