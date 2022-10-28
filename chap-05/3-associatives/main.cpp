#include "keys.h"

#include <set>

int main()
{
    std::set<ComparableDog> s1;
    ComparableDog           dog1("hello", "world");
    s1.emplace(dog1);
    return 0;
}
