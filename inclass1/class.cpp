#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

void printGreeting();
int getRandomValue(int min, int max); //gens n st. min 
int getInput(std::string prompt);
void printResult(int secret, int guess);



int main()
{

    int secret(getRandomValue(1,101));
    int guess{0};

    printGreeting();

    do
    {
        guess = getInput("Enter guess: ");
        printResult(secret, guess);
    } while (guess != secret);
}  
    
    void printGreeting()
    {
    std::cout <<"Welcome to the number guessing game. \n";   
    std::cout <<"Im thinking of a number 1 to 100. \n";   
    std::cout <<"Can you guess that number?\n";
    }
// displays prompt and returns user input
int getInput(std::string prompt)
{
    int guess{0};
    std::cout << prompt;
    std::cin >> guess;
    return guess;

}
// gens n such that min <= n < max   
int getRandomValue(int min, int max)    
{
    int rndValue{0};
    std::srand(std::time(0));

    rndValue = rand() % (max - min)+ min;

    return rndValue;
}
// prints result of the guess and tells user if high,low, or correct
void printResult(int secret, int guess)
{
if(guess < secret)
    std::cout << "Your guess is too low, guess again\n";
else if(guess > secret)   
    std::cout << "Your guess is too high, guess again\n";
else
    std::cout << "Correct.... Good job \n";

}


