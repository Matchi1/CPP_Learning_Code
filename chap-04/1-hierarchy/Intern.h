#pragma once

#include "Rank.h"
#include "Worker.h"

#include <string>
#include <string_view>

class Intern : public Worker
{
public:
    Intern(std::string name, std::string surname, unsigned int salary, bool is_clumsy);

    void fetch_coffee();

    unsigned int get_nb_broken_cups() const { return _nb_broken_cups; }

private:
    bool              _is_clumsy;
    unsigned int      _nb_broken_cups = 0u;
};
