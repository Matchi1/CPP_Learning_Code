#include "Rectangle.h"

float Rectangle::_default_size = 10;

Rectangle::Rectangle()
    : Rectangle { _default_size }
{}

Rectangle::Rectangle(float size)
    : Rectangle { size, size }
{}

Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
{}

void Rectangle::scale(float ratio)
{
    _length *= ratio;
    _width *= ratio;
}

void Rectangle::set_default_size(float size) {
    Rectangle::_default_size = size;
}

std::ostream& operator<<(std::ostream& cout, const Rectangle& rectangle) {
    return cout << "{ L: " << rectangle.get_length() << ", W: " << rectangle.get_width() << " }";
}
