#include <array>
#include <iostream>
#include <list>
#include <string>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, 4> arr1 { "Apricot", "Cherry", "Mango", "Raspberry" };
    std::cout << arr1[Apricot] << std::endl;
    std::cout << arr1[Cherry] << std::endl;
    std::cout << arr1[Mango] << std::endl;
    std::cout << arr1[Raspberry] << std::endl;
    // Implement array tests here.
}

std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}

void try_lists()
{
    std::list<int> l1 { 1, 1, 2 };
    std::list<int> l2(5, 7);
    std::list<int> l3 { 2, 3, 4 };
    std::list<int> l4 { 0 };
    l1.merge(l2);
    l3.merge(l4);
    l1.sort();
    l3.sort();
    auto it = l1.begin();
    std::advance(it, 2);
    l1.splice(it, l3);
    std::cout << l1 << std::endl;

}

void try_stacks()
{
    // Implement stack tests here.
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}
