#include "../includes/debug.hpp"

void displayInput(std::vector<int> inputArray)
{
    std::cout << "Input : " << std::endl;
    for (int i = 0; i < inputArray.size(); i++)
        std::cout << inputArray.at(i) << std::endl;
}

void displayKey(std::vector<char> keyArray)
{
    std::cout << "Key : " << std::endl;
    for (int i = 0; i < keyArray.size(); i++)
        std::cout << i + 1 << " : " << keyArray.at(i) << std::endl;
}
