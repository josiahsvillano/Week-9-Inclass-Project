//
// Created by manga on 5/21/2025.
//

#ifndef POINT_H
#define POINT_H

#include <string>
using std::string;



class Point {
private:
    double _x;
    double _y;
public:
    Point();
    Point (double x, double y);
    double Distance(Point point);
    string     ToString();
    double GetX;
    double GetY;

};



#endif //POINT_H
