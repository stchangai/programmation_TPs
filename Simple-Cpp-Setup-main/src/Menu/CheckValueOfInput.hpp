#pragma once

enum class Command {
    GuessANumber = '1',
    Hangman      = '2',
    Quit         = 'q',
};

bool CheckValueOfInput(Command command);