#include <iostream>

#include "rectangle.h"
#include "square.h"
using std::cout;
using std::endl;

int main() {
    Point p1(0,0);
    Point p2(2,3);
    Rectangle r1(p1, 4, 3);
    Square s1(p2, 5);

    cout << p1.ToString() << endl;
    cout << r1.ToString() << endl;
    cout << s1.ToString() << endl;

    return 0;
}