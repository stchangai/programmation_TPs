#include <iostream>
#include <random>
#include "./Hangman/playHangman.hpp"
#include "./Menu/CheckValueOfInput.hpp"
#include "./Menu/showListOfCommands.hpp"
#include "./extLib/getInputFromUser.hpp"
#include "./guessTheNumber/playGuessTheNumber.hpp"

int main()
{
    bool quit = false;
    while (!quit) {
        showListOfCommands();
        const auto command = getInputFromUser();
        quit               = CheckValueOfInput(static_cast<Command>(command));
    }
    return 0;
}
