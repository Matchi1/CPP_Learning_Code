#include "Staff.h"

#include <cstdio>

Staff::Staff(std::string name, std::string surname, unsigned int salary)
    : Worker { name, surname, salary, Rank::Default }
{}


void Staff::receive_task()
{
    std::printf("%s %s (Staff): \"No problem! I'm on it!\"\n", get_name().c_str(), get_surname().c_str());
    ++_assigned_tasks;
}

void Staff::complete_task()
{
    std::printf("%s %s (Staff): \"Perfect, this is done.\"\n", get_name().c_str(), get_surname().c_str());
    ++_done_tasks;
}
