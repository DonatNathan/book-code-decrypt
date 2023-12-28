#include <iostream>
#include <fstream>
#include <vector>

#include "../includes/main.hpp"

void decryptCode(std::vector<int> inputArray, std::vector<char> keyArray)
{
    std::string output;
    for (int i = 0; i < inputArray.size(); i++) {
        output.push_back(keyArray.at(inputArray.at(i) - 1));
    }
    std::cout << "Output : " << output << std::endl;
}

int main(int argc, char **argv)
{
    if (errorHandling(argc, argv) == 84)
        return 84;

    std::ifstream inputFile;
    std::ifstream keyFile;
    std::string word;
    std::vector<int> inputArray;
    std::vector<char> keyArray;

    inputFile.open(argv[1]);
    keyFile.open(argv[2]);

    while (inputFile >> word)
        inputArray.push_back(std::atoi(word.c_str()));
    while (keyFile >> word)
        keyArray.push_back(word[0]);

    decryptCode(inputArray, keyArray);

    return 0;
}