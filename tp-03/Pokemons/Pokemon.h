#pragma once

class Trainer;

// A creature that is cute and can fight other ones.
class Pokemon
{
public:
    Pokemon(std::string name)
        : _name { name }
    {}
    std::string    name() const { return _name; }
    const Trainer* trainer() const { return _trainer; }
    void           trained_by(Trainer* trainer) { _trainer = trainer; }

private:
    std::string               _name;
    Trainer* _trainer = nullptr;
};
