#pragma once

#include "Person.h"

class Phone
{
protected:
    Phone(const Person& owner)
        : _owner { owner }
    {}

public:
    virtual void ring() const { _owner.answer_phone(); }
    virtual ~Phone() {}
    std::string get_owner_name() const { return _owner.get_name(); }
    int get_owner_position() const { return _owner.get_position(); }

private:
    const Person& _owner;
};
