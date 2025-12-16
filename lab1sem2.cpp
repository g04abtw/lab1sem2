#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(double a, double b) : a(a), b(b) {}

double Rectangle::perimeter() {
    return 2 * (a + b);
}

double Rectangle::area() {
    return a * b;
}

double Rectangle::diagonal() {
    return sqrt(a * a + b * b);

}