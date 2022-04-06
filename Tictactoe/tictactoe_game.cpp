#include <iostream>
#include "tictactoe.h"


bool playAgain();
void printGreeting();
std::string getPlayerName(const std::string msg );
void playGame(std::string name1,std::string name2);

int main()
{

   
    std::string player1;
    std::string player2;


    printGreeting();
   do
   {
       player1 = getPlayerName("Enter the name of player one");
       player2 = getPlayerName("Enter the name of player two");

    playGame(player1, player2);

   } while (playAgain());
   
    
 
    //prompt if play again
}

void printGreeting()
{
    std::cout<<"Welcome to the game of TicTacToe.\n\n";
}

bool playAgain()
{
    char choice;
 do
 {
     std::cout <<"Would you like to play again? (y/n)\n";
    std::cin>>choice;
    choice = tolower(choice);
    
    if (choice == 'y' || choice == 'n')
    break;

    std::cout<<"Invalid option! try again.\n";
 } while (true);
 
    return false;
}

std::string getPlayerName(const std::string msg )
{
    std::string name;
    std::cout<<msg <<std::endl <<"Enter Name: \n";
    std::getline(std::cin, name);
    return name;
    

}

void playGame(std::string name1, std::string name2)
{
    TicTacToe game;

    while (game.getStatus)
    {
        /* code */
    }
    

}