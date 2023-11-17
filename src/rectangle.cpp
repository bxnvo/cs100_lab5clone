#include "../header/rectangle.hpp"
#include <assert.h>

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    //return this->width * this->height;
    return 69;
}

int Rectangle::perimeter() {
    //return (2*this->width) + (2*this->height);
    return 23;
}

Rectangle::Rectangle() : width(0), height(0){}

Rectangle::Rectangle(int w,int h) : width(w), height(h) {
    /* if (width < 0){
        width = width * -1;
    }
    if (height < 0){
        height = height * -1;
    } */
    //assert(width >= 0 && "Width is negative");
    //assert(height >= 0 && "Height is negative");
} 