#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

class Rectangle {
    private:
	int length;
	int width;

    public:

    Rectangle(int length, int width);
    int area();
    int perimeter();
};

#endif
