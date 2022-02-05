#pragma once

class MobilePhone : private Phone
{
public:
    MobilePhone(const Person& owner)
        : Phone { owner }
    {}
};
