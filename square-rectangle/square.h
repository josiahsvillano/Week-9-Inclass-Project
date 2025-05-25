//
// Created by manga on 5/21/2025.
//

#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"


class Square :public Rectangle{
public:
    Square(const Point& upperLeft, size_t side);
    ~Square();
    string ToString() const;
};

/*
 *1. What happened when you removed the Rectangle in ToString()? Why?
 *      When I removed the rectangle in the ToString function, instead of the function calling the
 *      ToString() function declared in rectangle.h, it calls itself (the ToString function declared
 *      in circle.h). This causes an infinite loop to occur and the program to not compile correctly
 *2. Could you print the _width only in the square? Why?
 *      Without changing the rectangle.h file, it is not possible to directly call the _width member due
 *      the fact that _width is private. There are ways you could compute the value of _width by doing
 *      math with the public functions, however the proper way you would access _width would be to go into
 *      rectangle.h and change the data members from "private:" to "protected:" which grants all subclasses
 *      derived from the superclass access to the data class while keeping them inaccessible the rest of the
 *      program
 *3. What happened when you removed the Rectangle in the constructor call? Why?
 *      When you remove Rectangle in the square constructor call, the _upperLeft, _width, and _height members
 *      all become inaccessible to square.cpp for the same reasons as stated in question 2
 *
 */


#endif //SQUARE_H
