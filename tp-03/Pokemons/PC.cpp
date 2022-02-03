#include "PC.h"

const std::vector<std::unique_ptr<Pokemon>>& PC::pokemons() const
{
    return _pokemons;
}

void PC::receive(std::unique_ptr<Pokemon> pokemon){
    _pokemons.emplace_back(std::move(pokemon));
}
