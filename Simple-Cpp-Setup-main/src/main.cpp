#include <iostream>


int testFunction(){
    return 2;
}

int main()
{
    std::cout << "Hello World\n";
    int test = testFunction();
    std::cout << test << std::endl;

    return 0;
}

