#include <iostream>
#include <string>

class Person
{
public:
    const std::string& get_name() const { return _name; }
    unsigned int       get_age() const { return _age; }

    Person() {}

    Person(std::string name, unsigned int age)
        : _name { name }
        , _age { age }
    {
        std::cout << "Person named '" << _name << "' is " << _age << " years old." << std::endl;
    }

private:
    const std::string  _name;
    unsigned int _age = 0u;
};

int main()
{
    Person p { "Batman", 23 };

    return 0;
}
