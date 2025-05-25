//
// Created by manga on 5/21/2025.
//

#include "point.h"

#include <cmath>
#include <sstream>
using std::stringstream;

Point::Point() {
    _x = 0;
    _y = 0;
}

Point::Point(double x, double y) {
    _x = x;
    _y = y;
}

double Point::Distance(Point point) {
    return sqrt((_x * _x) + (_y * _y));
}

string Point::ToString() {
    stringstream ss;
    ss << "(" << _x << ", " << _y << ")";
    return ss.str();
}
