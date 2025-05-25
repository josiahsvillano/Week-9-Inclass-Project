//
// Created by manga on 5/21/2025.
//

#include "square.h"
#include <sstream>
using std::stringstream;

Square::Square(const Point& upperLeft, size_t side):
    Rectangle(upperLeft, side, side){
}

Square::~Square() {
}

string Square::ToString() const {
    stringstream ss;
    ss << "Square: " << Rectangle::ToString();
    return ss.str();
}
