#include <iostream>
#include "boobah.cpp"
#define WINDOWS true

void clearScreen();
void clearInstream();


int main()
{
    playGame();


    return 0;
}




void clearScreen()
{
    if(WINDOWS)
    system("CLS");
    else
    system("clear");
}

void clearInstream()

{
    std::cin.clear();
    //wrong input reamins on the sream, so you need to get rid of it
    std::cin.ignore(INT_MAX, '\n');

}

