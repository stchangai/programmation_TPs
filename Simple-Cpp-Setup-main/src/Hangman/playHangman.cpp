#include <iostream>
#include <random>
#include "../extLib/rand.hpp"
#include "getLetterFromUser.hpp"
#include "getWordToGuess.hpp"

void playHangman()
{
    std::string wordToGuess       = getWordToGuess();
    std::string letterGivedByUser = " ";
    std::string result;
    int         letterFoundCount = static_cast<int>(wordToGuess.length());
    for (size_t i = 0; i < wordToGuess.size(); i++) {
        result.push_back('_');
    }
    std::cout << wordToGuess << std::endl;
    std::string lettersStocked;
    int         lives          = 8;
    bool        isALetterFound = false;
    while (lives > 0 && letterFoundCount != 0) {
        std::cout << "You have " << lives << " lives" << std::endl;
        isALetterFound = false;
        std::cout << result << std::endl;
        letterGivedByUser[0] = getLetterFromUser();

        size_t findLetterPos = wordToGuess.find(letterGivedByUser[0]);
        std::cout << "findLetterPos = " << findLetterPos << std::endl;
        while (findLetterPos != std::string::npos) {
            std::cout << "boucle while entrée " << std::endl;
            result[findLetterPos] = letterGivedByUser[0];
            isALetterFound        = true;
            letterFoundCount--;
            findLetterPos = wordToGuess.find(letterGivedByUser[0], findLetterPos + 1);
        }

        if (isALetterFound == false) {
            lives--;
        }
    }
    if (lives == 0) {
        std::cout << "you lose, sorry ! The word was " << wordToGuess << std::endl;
    }
    else {
        std::cout << "Wouah you are a real killer gamer ! You win ! The word is indeed" << result << std::endl;
    }
}