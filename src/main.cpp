#include "../includes/main.hpp"

//Todo : Set separators
//Todo : Make unit tests
//Todo : Make functionals tests
//Todo : Find solution to set spaces between words

void decryptCode(std::vector<int> inputArray, std::vector<char> keyArray)
{
    std::string output;
    std::ofstream outputFile;

    outputFile.open("output.txt");

    for (int i = 0; i < inputArray.size(); i++)
        output.push_back(keyArray.at(inputArray.at(i) - 1));

    outputFile << output;
    outputFile.close();
}

void replaceSeparatorsKey(std::string keyFilePath, std::string separators)
{
    std::ifstream keyFile;
    std::ofstream newKeyFile;
    std::string tempKey;
    std::string word;

    keyFile.open(keyFilePath);
    while (keyFile >> word)
        tempKey += " " + word;
    keyFile.close();

    for (int i = 0; i < tempKey.length(); i++)
        if (separators.find(tempKey[i]) != std::string::npos)
            tempKey[i] = ' ';

    newKeyFile.open("key.txt");
    newKeyFile << tempKey;
    newKeyFile.close();
}

int main(int argc, char **argv)
{
    if (errorHandling(argc, argv) == 84)
        return 84;

    std::string separators = "";

    if (argc > 3)
        separators = argv[3];
    
    replaceSeparatorsKey(argv[2], separators);

    std::ifstream inputFile;
    std::ifstream keyFile;
    std::string word;
    std::vector<int> inputArray;
    std::vector<char> keyArray;

    inputFile.open(argv[1]);
    keyFile.open("key.txt");

    while (inputFile >> word)
        inputArray.push_back(std::atoi(word.c_str()));
    while (keyFile >> word)
        keyArray.push_back(word[0]);

    // displayInput(inputArray);
    // displayKey(keyArray);

    decryptCode(inputArray, keyArray);

    return 0;
}