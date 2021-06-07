#include <iostream>
#include "rectangle.hpp"

int main() {
    Rectangle r(10, 10);
    std::cout << r.area() << std::endl;
    std::cout << r.perimeter() << std::endl;
}
