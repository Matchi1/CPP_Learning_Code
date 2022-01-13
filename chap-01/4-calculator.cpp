#include <iostream>
#include <string>
#include <vector>

int sum(std::vector<int> values) {
    auto result = 0;
    for (auto v : values)
    {
        result += v;
    }
    return result;
}

int mul(std::vector<int> values) {
    auto result = 1;
    for (auto v : values)
    {
        result *= v;
    }
    return result;
}

int sub(std::vector<int> values) {
    auto result = values[0];
    for (auto i = 1u; i < values.size(); ++i)
    {
        result -= values[i];
    }
    return result;
}

void display_result(int result)
{
    // Output result.
    std::cout << "Result is " << result << std::endl;
}

int compute_result(char op, const std::vector<int>& values)
{
    // Process operation, depending on the operator.
    auto result = 0;

    switch(op)
    {
        case '+':
            result = sum(values); break;
        case '*':
            result = mul(values); break;
        default:
            result = sub(values);
    }
    return result;
}

bool parse_params(char& op, std::vector<int>& values, int argc, char** argv)
{
    // Parsing program parameters.
    if (argc < 2)
    {
        std::cerr << "Expected operator as first argument." << std::endl;
        return false;
    }

    op = argv[1][0];

    if (op != '+' && op != '*' && op != '-')
    {
        std::cerr << "Expected operator to be '+', '*' or '-'." << std::endl;
        return false;
    }
    if (op == '-' && argc < 3)
    {
        std::cerr << "Operator '-' expects at least one operand to substract from." << std::endl;
        return false;
    }
    for (auto arg_i = 2; arg_i < argc; ++arg_i)
    {
        auto value = std::stoi(argv[arg_i]);
        values.emplace_back(value);
    }
    return true;
}

int main(int argc, char** argv)
{
    char op;
    std::vector<int> values;

    if(parse_params(op, values, argc, argv) == false)
    {
        return -1;
    }

    auto result = compute_result(op, values);
    if(result == -1)
    {
        return -1;
    }
    display_result(result);

    return 0;
}
