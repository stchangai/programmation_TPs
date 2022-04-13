#include <iostream>
#include <random>
#include "../extLib/rand.hpp"
#include "getLetterFromUser.hpp"
#include "getWordToGuess.hpp"

void FillResultWithDashAtBeginning(std::string& result, const std::string& wordToGuess)
{
    for (size_t i = 0; i < wordToGuess.size(); i++) {
        result.push_back('_');
    }
}

bool ReplaceLetterInWord(size_t& findLetterPos, char letterGivedByUser, std::string& result, int& letterFoundCount, std::string wordToGuess)
{
    bool isALetterFound = false;
    while (findLetterPos != std::string::npos) {
        result[findLetterPos] = letterGivedByUser;
        letterFoundCount--;
        findLetterPos  = wordToGuess.find(letterGivedByUser, findLetterPos + 1);
        isALetterFound = true;
    }
    return isALetterFound;
}

void DisplayResultEndGame(int lives, const std::string& wordToGuess, const std::string& result)
{
    if (lives == 0) {
        std::cout << "you lose, sorry ! The word was " << wordToGuess << std::endl;
    }
    else {
        std::cout << "Wouah you are a real killer gamer ! You win ! The word is indeed " << result << std::endl;
    }
}

void playHangman()
{
    std::string wordToGuess       = getWordToGuess();
    std::string letterGivedByUser = " ";
    std::string result;
    int         letterFoundCount = static_cast<int>(wordToGuess.length());

    FillResultWithDashAtBeginning(result, wordToGuess);
    // std::cout << wordToGuess << std::endl;
    std::string lettersStocked;
    int         lives = 8;
    bool        isALetterFound;
    while (lives > 0 && letterFoundCount != 0) {
        std::cout << "You have " << lives << " lives" << std::endl;

        std::cout << result << std::endl;
        letterGivedByUser[0] = getLetterFromUser();

        size_t findLetterPos = wordToGuess.find(letterGivedByUser[0]);

        isALetterFound = ReplaceLetterInWord(findLetterPos, letterGivedByUser[0], result, letterFoundCount, wordToGuess);

        if (!isALetterFound) {
            lives--;
        }
    }

    DisplayResultEndGame(lives, wordToGuess, result);
}
