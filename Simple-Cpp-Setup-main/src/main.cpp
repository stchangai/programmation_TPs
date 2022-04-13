#include <p6/p6.h>
#include <iostream>
#include <random>
#include "./Hangman/playHangman.hpp"
#include "./Menu/CheckValueOfInput.hpp"
#include "./Menu/showListOfCommands.hpp"
#include "./extLib/getInputFromUser.hpp"
#include "./guessTheNumber/playGuessTheNumber.hpp"

int main()
{
    auto ctx = p6::Context{{1280, 720, "Hello p6"}};
    // ctx.update = [&]() {
    //     ctx.background({0.5f, 0.3f, 0.8f});
    //     ctx.circle(p6::Center{ctx.mouse()} p6::Radius{0.3f});
    // };
    ctx.start();
    /********** GAMES HANGMAN - GUESSAWORD *************/
    // bool quit = false;
    // while (!quit) {
    //     showListOfCommands();
    //     const auto command = getInputFromUser();
    //     quit               = CheckValueOfInput(static_cast<Command>(command));
    // }
    return 0;
}
