//
// Created by manga on 5/21/2025.
//

#include "rectangle.h"
#include <sstream>
using std::stringstream;

Rectangle::Rectangle(const Point& upperLeft, size_t width, size_t height):
    _upperLeft(upperLeft), _width(width), _height(height){
}

Rectangle::~Rectangle() {
}

double Rectangle::Area() const {
    return _width * _height;
}

double Rectangle::Perimeter() const {
    return 2 * (_width + _height);
}

string Rectangle::ToString() const{
    stringstream ss;
    ss << "Rectangle: {width: " << _width << ", height: " << _height << "}";
    return ss.str();
}

void Rectangle::Double() {
    _width *= 2;
    _height *= 2;
}
