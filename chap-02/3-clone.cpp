#include <iostream>
#include <string>

class Person
{
public:
    Person(const Person& person)
        : _name { person._name }
        , _surname { person._surname }
    {}

    Person(const std::string& name, const std::string& surname)
        : _name { name }
        , _surname { surname }
    {}

    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const { return _age; }

    void wait(unsigned int years) { _age += years; }

    friend std::ostream& operator<<(std::ostream& cout, const Person& person);

    Person& operator=(const Person& other)
    {
        if (this != &other)
        {
            _name    = other._name;
            _surname = other._surname;
        }

        return *this;
    }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};

std::ostream& operator<<(std::ostream& cout, const Person& person)
{
    cout << "Person named '" << person.get_full_name() << "' is " << person.get_age() << " years old.";
    return cout;
}

int main()
{
    Person batman { "Bruce", "Wayne" };
    Person another { batman };
    batman.wait(23);

    Person assigned_clone { "Batman", "2" };
    std::cout << assigned_clone << std::endl;

    assigned_clone = batman;
    std::cout << assigned_clone << std::endl;

    std::cout << batman << std::endl;
    std::cout << another << std::endl;

    return 0;
}
