#include <iostream>
#include <vector>

int main()
{
    /*
    std::vector<int> v1 { 4, 0 };
    for (auto value : v1)
    {
        std::cout << value << std::endl;
    }
    std::vector<int> v2(4, 0);
    for (auto value : v2)
    {
        std::cout << value << std::endl;
    }
    */

    /*
    int  array[]                 = { 0, 4, 3 };
    int* iterator_on_2nd_element = &array[1];
    std::vector<int> v1 { &array[0], &array[3] };
    for (auto value : v1)
    {
        std::cout << value << std::endl;
    }
    */

    /*
    std::vector<int> values { 1, 2, 3 };
    for (size_t left = 0, right = values.size() - 1; left < right; ++left, --right)
    {
        std::swap(values[left], values[right]);
    }
    for (auto value : values)
    {
        std::cout << value << std::endl;
    }
    */



    return 0;
}
