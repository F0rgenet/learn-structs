#pragma once
#include "../structs/rect.h"
#include "../structs/circle.h"

#ifndef INCLUSION_H
#define INCLUSION_H

bool checkInclusion(Circle* circleA, Circle* circleB);
bool checkInclusion(Rect* rectA, Rect* rectB);
bool checkInclusion(Rect* rectA, Circle* circleB);
bool checkInclusion(Circle* circleA, Rect* rectB);

#endif