#include "../header/rectangle.hpp"
#include <assert.h>

Rectangle::Rectangle () {
    width = 0;
    height = 0;
}

Rectangle::Rectangle (int h, int w) {
    width = w;
    height = h;
    assert (width >=0 && "Width is negative");
    assert (height >=0 && "Height is negative");

}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return (2*width) + (2*height);
}

