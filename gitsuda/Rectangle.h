#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double a, b; // стороны
public:
    Rectangle(double a, double b);
    double perimeter();
    double area();
    double diagonal();
};

#endif