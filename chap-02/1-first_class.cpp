#include <iostream>

class Person {
    public:
        void set_name(std::string name) {
            _name = name;
        }
        void set_age(int age) {
            _age  = age;
        }
        std::string get_name() {
            return _name;
        }
        int get_age() {
            return _age;
        }

    private:
        std::string _name;
        unsigned _age;
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
