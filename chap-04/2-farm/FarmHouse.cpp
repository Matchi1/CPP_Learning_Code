#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Cow.h"
#include "Dog.h"

#include <vector>

void sing_chorus(const std::vector<Animal*>& animals)
{
    for (const auto& animal : animals)
    {
        animal->sing(' ');
    }

    std::cout << std::endl;
}

void sing_a_lot(const Animal& animal, unsigned int times)
{
    if (times > 0)
    {
        while (--times > 0)
        {
            animal.sing(' ');
        }

        animal.sing('\n');
    }
}

int main()
{
    std::vector<Animal*> animals;
    Cat                  cat;
    Chicken              chicken;
    Dog                  dog;
    Cow                  cow;

    animals.emplace_back(&dog);
    animals.emplace_back(&cat);

    sing_chorus(animals);

    sing_a_lot(cat, 2u);
    sing_a_lot(dog, 1u);
    sing_a_lot(cow, 3u);
    sing_a_lot(dog, 1u);
    sing_a_lot(chicken, 2u);

    std::vector<std::unique_ptr<Animal>> animals;
    animals.emplace_back(std::make_unique<Dog>());
    animals.emplace_back(std::make_unique<Cat>());
    animals.emplace_back(std::make_unique<Chicken>());

    return 0;
}
