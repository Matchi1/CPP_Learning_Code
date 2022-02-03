#pragma once

#include "Pokemon.h"

#include <memory>

// A ball where Pokemon sleep.
class Pokeball
{
public:
    Pokeball() {}
    Pokeball(const Pokemon& pokemon)
        : _pokemon { std::make_unique<Pokemon>(pokemon) }
    {}
    bool     empty() const { return _pokemon == nullptr; }
    Pokemon& pokemon() const { return *_pokemon; }
    void     store(std::unique_ptr<Pokemon> pokemon) { _pokemon = std::move(pokemon); }

private:
    std::unique_ptr<Pokemon> _pokemon;
};
