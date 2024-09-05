#include <iostream>
#include "input.h"

struct Point2D {
    float x = 0;
    float y = 0;

    friend std::ostream& operator << (std::ostream& stream, const Point2D& point) {
        stream << "Point2D(" << point.x << ", " << point.y << ")";
        return stream;
    }
};

Point2D readPoint2D() {
    Point2D point {};
    std::cout << "Enter Point2D coordinates >" << std::endl;
    point.x = userValueInput("Enter X: ");
    point.y = userValueInput("Enter Y: ");

    return point;
}

void outputPoint(const Point2D* point) {
    std::cout << *point << std::endl;
}