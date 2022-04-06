#include "CheckValueOfInput.hpp"
#include <iostream>
#include "../Hangman/playHangman.hpp"
#include "../guessTheNumber/playGuessTheNumber.hpp"

bool CheckValueOfInput(Command command)
{
    switch (command) {
    case Command::GuessANumber:
        playGuessTheNumber(100);
        return true;
        break;
    case Command::Hangman:
        playHangman();
        return true;
        break;
    case Command::Quit:
        exit(0);
        break;
    default:
        std::cout << "Sorry I don't know this command ! Try again..." << std::endl;
        return false;
        break;
    }
}