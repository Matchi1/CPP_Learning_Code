#include <iostream>
#include <memory>

int passthrough(std::unique_ptr<int> i1)
{
    auto tmp = *i1;
    return tmp;
}

void display(const std::string& variable_name, const std::unique_ptr<int>& variable)
{
    if (variable == nullptr)
    {
        std::cout << variable_name << " is empty " << std::endl;
    }
    else
    {
        std::cout << variable_name << " contains " << *variable << std::endl;
    }
}

int main(void)
{
    std::unique_ptr<int> i1 = std::make_unique<int>(10);
    display("i1", i1);
    std::unique_ptr<int> i2 = std::make_unique<int>(20);
    display("i2", i2);
    *i2 = passthrough(std::move(i1));
    display("i1", i1);
    display("i2", i2);
    return 0;
}
