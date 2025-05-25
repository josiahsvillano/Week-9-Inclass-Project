//
// Created by manga on 5/21/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point.h"

class Rectangle {
private:
    Point _upperLeft;
    size_t _width;
    size_t _height;
public:
    Rectangle(){_height = 0, _width = 0;};
    Rectangle (const Point& upperLeft, size_t width, size_t height);
    ~Rectangle();
    double Area() const;
    double Perimeter() const;
    string ToString() const;
    void Double();

};



#endif //RECTANGLE_H
