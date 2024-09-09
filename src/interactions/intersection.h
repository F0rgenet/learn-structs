#pragma once
#include "../structs/rect.h"
#include "../structs/circle.h"

#ifndef INTERSECTIONS_H
#define INTERSECTIONS_H

bool checkIntersection(Rect* rectA, Rect* rectB);
bool checkIntersection(Circle* circleA, Circle* circleB);
bool checkIntersection(Rect* rectA, Circle* circleB);

#endif