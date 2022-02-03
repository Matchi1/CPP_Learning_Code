#pragma once

#include "Pokeball.h"

#include <array>

// A person that capture Pokemons and make them fight.
class Trainer
{
public:
    Trainer(std::string name, PC& pc)
        : _name { name }
        , _pc { pc }
    {}
    std::string                    name() const { return _name; }
    const std::array<Pokeball, 6>& pokeballs() const { return _pokeballs; }
    void                           capture(std::unique_ptr<Pokemon> pokemon)
    {
        pokemon->trained_by(this);
        if (_size > 5)
        {
            _pc.receive(std::move(pokemon));
        }
        else
        {
            _pokeballs[_size++] = Pokeball(*pokemon);
        }
    }

private:
    PC&                     _pc;
    int                     _size = 0;
    std::array<Pokeball, 6> _pokeballs;
    const std::string       _name;
};
