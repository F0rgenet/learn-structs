#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;


int main() {
  const auto point = readPoint2D();
  outputPoint(&point);
  const auto circle = readCircle();
  outputCircle(&circle);

  cout << isPointInCircle(&circle, &point) << endl;
  return 0;
}