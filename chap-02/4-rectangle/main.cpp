#include "Rectangle.h"

#include <iostream>

int main()
{
    /*
    Rectangle rect(2.f, 4.f);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    rect.scale(3);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    Rectangle square(2.5f, 2.5f);
    std::cout << "{ L: " << square.get_length() << ", W: " << square.get_width() << " }" << std::endl;

    std::cout << Rectangle::_default_size << std::endl;

    Rectangle another;
    std::cout << "{ L: " << another.get_length() << ", W: " << another.get_width() << " }" << std::endl;
    */

    /* some instruction saying that next squares's size will be 3.f */

    Rectangle::set_default_size(3.f);
    Rectangle s1;
    Rectangle s2;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    /* some instruction saying that next squares's size will now be 5.f */

    Rectangle::set_default_size(5.f);
    Rectangle s3;
    Rectangle s4;
    Rectangle s5;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;
    std::cout << s5 << std::endl;

    return 0;
}
