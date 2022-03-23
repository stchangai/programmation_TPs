#include "getLetterFromUser.hpp"
#include <iostream>
#include <string>

char getLetterFromUser()
{
    char LetterGivedByUser = ' ';
    std::cout << "--> ";
    std::cin >> LetterGivedByUser;
    return LetterGivedByUser;
}