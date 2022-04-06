#include <iostream>
#include <string>

char getInputFromUser()
{
    char LetterGivedByUser = ' ';
    std::cout << "--> ";
    std::cin >> LetterGivedByUser;
    return LetterGivedByUser;
}
