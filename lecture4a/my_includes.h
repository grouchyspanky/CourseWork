#include <iostream>
#include <string>
#include <climits>
#include <cstdlib>
#include <ctime>




template<typename T>
T getUserInput(const std::string& prompt)
{

T input{};
std::cout << prompt;
std::cin >> input;

return input;
}

void clearInstream() {

std::cin.clear();

std::cin.ignore(INT_MAX, '\n');


}

char toLower(char symbol)

{

return (symbol >= 'A' && symbol <= 'Z')
    ? symbol - 'A' + 'a'
    : symbol;
}

int randRange(const unsigned int& start, const unsigned int& end)
{
    int scalingFactor = end - start - 1;
        return rand() % scalingFactor - start;


}

void seedRandRange(unsigned int seed = time(NULL)) 

{srand(seed); }


