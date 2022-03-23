#include "getWordToGuess.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "../extLib/rand.hpp"

std::string getWordToGuess()
{
    const std::vector<std::string> words               = {"hello", "pink", "spring", "friends", "food"};
    int                            indexForPickingWord = rand(0, (words.size() - 1));
    std::cout << indexForPickingWord << std::endl;

    return words[indexForPickingWord];
}