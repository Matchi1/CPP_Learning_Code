#pragma once

#include "Rank.h"
#include "Worker.h"

#include <string>
#include <string_view>

class Staff;
class Intern;

class Boss : public Worker
{
public:
    Boss(std::string name, std::string surname, unsigned int salary, bool is_nice);

    void assign_task(Staff& staff) const;
    void ask_coffee(Intern& intern) const;

private:
    bool              _is_nice;
};
