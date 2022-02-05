#pragma once

class HomePhone : private Phone
{
public:
    HomePhone(const Person& owner, int position)
        : Phone { owner }
    	, _position { position }
    {}

    void ring() const override {
	    if(_position == Phone::get_owner_position())
	    {
		    Phone::ring();
	    }
	    else
	    {
		    std::cout << "This is the voicemail of " << Phone::get_owner_name() << ". Please leave a message." << std::endl;
	    }
    }

private:
    int _position;
};
