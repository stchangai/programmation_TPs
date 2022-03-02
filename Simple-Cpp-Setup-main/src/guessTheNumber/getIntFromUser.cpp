#include "getIntFromUser.hpp"
#include <iostream>

int getIntFromUser(int max)
{
    int numberGivedByUser = 0;
    std::cout << "Pick a number between 0 and " << max << " : " << std::endl;
    std::cin >> numberGivedByUser;
    return numberGivedByUser;
}