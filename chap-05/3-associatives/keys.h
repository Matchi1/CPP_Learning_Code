#pragma once

#include <string>

class ComparableDog
{
public:
    ComparableDog(const std::string& name, const std::string& species)
        : _name { name }
        , _species { species }
    {}
    bool operator<(const ComparableDog& other) const
    {
        if (_name < other._name)
        {
            return true;
        }
        else if (_name > other._name)
        {
            return false;
        }
        else
        {
            return _species < other._species;
        }
    }

private:
    std::string _name;
    std::string _species;
};

class HashableDog
{
public:
    HashableDog(const std::string& name, const std::string& species)
        : _name { name }
        , _species { species }
    {}

private:
    std::string _name;
    std::string _species;
};
