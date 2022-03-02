#include <iostream>
#include <random>
#include "getIntFromUser.hpp"
#include "rand.hpp"

void playGuessTheNumber(int max)
{
    int  numberToGuess     = rand(1, max);
    int  numberGivedByUser = max;
    bool finished          = false;
    while (!finished) {
        numberGivedByUser = getIntFromUser(max);
        if (numberGivedByUser == numberToGuess) {
            std::cout << "Congrats, you won" << std::endl;
            finished = true;
        }
        else if (numberGivedByUser < numberToGuess) {
            std::cout << "Greater" << std::endl;
        }
        else {
            std::cout << "Smaller" << std::endl;
        }
    }
}