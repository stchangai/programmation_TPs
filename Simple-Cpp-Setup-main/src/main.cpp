#include <iostream>
#include <random>

class Test {
private:
    int x;

public:
    int get_x() const { return x; }
};

void guessTheNumber(int numberGivedByUser, int numberToGuess)
{
    if (numberGivedByUser == numberToGuess) {
        std::cout << "Congrats, you won" << std::endl;
    }
    else if (numberGivedByUser < numberToGuess) {
        std::cout << "Greater" << std::endl;
    }
    else {
        std::cout << "Smaller" << std::endl;
    }
}

int rand(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int getIntFromUser()
{
    int numberGivedByUser = 0;
    std::cout << "Pick a number between 0 and 10" << std::endl;
    std::cin >> numberGivedByUser;
    return numberGivedByUser;
}

void playGuessTheNumber(int max)
{
    int  numberToGuess = rand(1, max);
    int  numberGivedByUser;
    bool finished = false;
    while (!finished) {
        numberGivedByUser = getIntFromUser();
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

int main()
{
    playGuessTheNumber(10);
    return 0;
}
