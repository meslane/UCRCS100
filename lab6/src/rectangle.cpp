#include "rectangle.hpp"

Rectangle::Rectangle(int l, int w) {
    this->length = l;
    this->width = w;
}

int Rectangle::area() {
    return this->length * this->width;
}

int Rectangle::perimeter() {
    return (2 * this->length) + (2 * this->width);
}
