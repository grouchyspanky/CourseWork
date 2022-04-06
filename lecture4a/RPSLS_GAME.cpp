#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <functional>
#include <map>
#include "my_includes.h"

void printGreeting();
char getValidPlayChoice(std::string);
void turn();
char getValidTurnChoice(std::string prompt);
bool isValidTurnInput(char choice);
void rock(char);
void paper(char);
void scissors(char);
void lizard(char);
void spock(char);
int getSymbolIndex(char choice);

const static std::string symbols[] {"Rock", "Paper", "Sissors", "Lizard", "Spock"};
const static std::function<bool(char)> wins[] = {

    [] (const char symbol) {return (symbol =='s' || symbol == 'l');},
    [] (const char symbol) {return (symbol =='r' || symbol == 'k');},
    [] (const char symbol) {return (symbol =='p' || symbol == 'l');},
    [] (const char symbol) {return (symbol =='p' || symbol == 's');},
    [] (const char symbol) {return (symbol =='r' || symbol == 's');},
};

const static std::map<int, std::string> rules {
    {2,"rock crushes scissors"},
    {3,"rock crushes lizard"},
    {10,"paper covers rock"},
    {14,"paper disproves spock"},
    {21,"scissors cuts paper"},
    {23,"Scissors decapitates lizard"},
    {31,"Lizard eats paper"},
    {35,"lizard posions Spock"},
    {40,"Spock vaporizes rock"},
    {43,"Spock smashes scissors"}


};

int getruleIndex(int winner, int loser){return winner * 10 + loser;};


int main(){

 // print greeting

char choice{};

seedRandRange();

printGreeting();

choice = getValidPlayChoice("would you like to play Rock-Paper-Scissors-Lizard-Spock? (y/n):");

do
{
    if(choice == 'n')
    return 0;

    turn();

    choice = getValidPlayChoice("Play Again? (y/n) ");
} while (true);
return 0;
}

void rock(char choice)
{
switch (choice)
{
case 'r':
std::cout<<"You chose rock and the computer chose rock!\n";
std::cout<<"Its a draw!\n";
break;

case 'p':
std::cout<<"You chose paper and the computer chose rock!\n";
std::cout<<"Paper wraps around rock\n";
std::cout<<"You win!\n";
break;

case 's':
std::cout<<"You chose Scissors and the computer chose rock!\n";
std::cout<<"Scissors is smashed by rock!\n";
std::cout<<"You lose!\n";
break;

case 'l':
std::cout<<"You chose lizard and the computer chose rock!\n";
std::cout<<"Lizard is crushed by rock!\n";
std::cout<<"You lose!\n";
break;

case 'k':
std::cout<<"You chose Spock and the computer chose rock!\n";
std::cout<<"Spock vaporizes rock!\n";
std::cout<<"You win!\n";
break;







default:
    break;
}




}

void paper(char choice)
{
    switch (choice)
{
case 'r':

std::cout<<"You chose rock and the computer chose paper!\n";
std::cout<<"Paper covers rock\n";
std::cout<<"You Lose!\n";
break;

case 'p':
std::cout<<"You chose paper and the computer chose paper!\n";
std::cout<<"Its a draw!\n";
break;

case 's':
std::cout<<"You chose Scissors and the computer chose paper!\n";
std::cout<<"Scissors cuts paper!\n";
std::cout<<"You Win!\n";
break;

case 'l':
std::cout<<"You chose lizard and the computer chose paper!\n";
std::cout<<"Lizard eats paper!\n";
std::cout<<"You win!\n";
break;

case 'k':
std::cout<<"You chose Spock and the computer chose paper!\n";
std::cout<<"Spock is disproved by paper!\n";
std::cout<<"You win!\n";
break;

}
}

void scissors(char choice)
{
    
}

void lizard(char choice)
{
    
}

void spock(char choice)
{
    
}

void printGreeting(){
    std::cout<<"Welcome to Rock-Paper-Scissors-Lizard-Spock\n\n ";

bool isValidPlayInput(char choice)
{
return(choice == 'y' || choice == 'n');

}
}

char getValidTurnChoice(std::string prompt)

{
    std::cout<<"Rules:\n"
            <<"(R)ock \n"
            <<"(P)aper \n"
            <<"(S)cissors \n"
            <<"(L)izard \n"
            <<"Spoc(k) \n";
}


char choice{};
do
{
    choice = toLower(getUserInput<char>(prompt));
    clearInstream();

    if(isValidPlayInput(choice))
    return choice;




std::cout<<"invalid choice! Please try again. \n\n";
} while (true);



}

char getValidPlayChoice(std::string prompt)

{

char choice{};
do
{
    choice = toLower(getUserInput<char>(prompt));
    clearInstream();

    if(isValidPlayInput(choice))
    return choice;




std::cout<<"invalid choice! Please try again. \n\n";
} while (true);



}

bool isValidTurnInput(char choice) {

switch (choice)
{
case 'r' :
case 'p' :
case 's' :
case 'l' :
case 'k' :

return true;
}
return false;

}

void turn(){

int cChoice{randRange(0,4)};
char userChoice{getValidTurnChoice("Enter the letter of your choice: ")};
int uChoice{getSymbolIndex(userChoice)};

        std::cout<<"the computer chose "<<symbols[uChoice]
        <<" and you chose "<< getSymbolIndex(userChoice);

std::cout<<"The computer chose "<< symbols[cChoice]
    <<" and you chose " << uChoice << " , \n";

if (cChoice == uChoice)
{
    std::cout<<"Its a draw!\n";
    return;
}

if(wins[cChoice](uChoice))
{
    std::cout<<rules.at(getruleIndex(cChoice, uChoice))<<std::endl;
    


}

else {

}










/*
switch (computerChoice)
{
case 1:
    rock(userChoice);
    break;
case 2:
    paper(userChoice);
    break;
case 3:
    scissors(userChoice);
    break;
case 4:
    lizard(userChoice);
    break;
case 5:
    spock(userChoice);
    break;

}*/



}

int getSymbolIndex(char choice){

switch (choice)
{
case 'r':
    return 0;
    break;

case 'p':
    return 1;
    break;

case 's':
    return 2;
    break;

case 'l':
    return 3;
    break;

case 'k':
    return 4;
    break;

}
}




/*
void rock(char choice)
{
switch (choice)
{
case 'r':
std::cout<<"You chose rock and the computer chose rock!\n";
std::cout<<"Its a draw!\n";
break;

case 'p':
std::cout<<"You chose paper and the computer chose rock!\n";
std::cout<<"Paper wraps around rock\n";
std::cout<<"You win!\n";
break;

case 's':
std::cout<<"You chose Scissors and the computer chose rock!\n";
std::cout<<"Scissors is smashed by rock!\n";
std::cout<<"You lose!\n";
break;

case 'l':
std::cout<<"You chose lizard and the computer chose rock!\n";
std::cout<<"Lizard is crushed by rock!\n";
std::cout<<"You lose!\n";
break;

case 'k':
std::cout<<"You chose Spock and the computer chose rock!\n";
std::cout<<"Spock vaporizes rock!\n";
std::cout<<"You win!\n";
break;







default:
    break;
}




}

void paper(char choice)
{
    switch (choice)
{
case 'r':

std::cout<<"You chose rock and the computer chose paper!\n";
std::cout<<"Paper covers rock\n";
std::cout<<"You Lose!\n";
break;

case 'p':
std::cout<<"You chose paper and the computer chose paper!\n";
std::cout<<"Its a draw!\n";
break;

case 's':
std::cout<<"You chose Scissors and the computer chose paper!\n";
std::cout<<"Scissors cuts paper!\n";
std::cout<<"You Win!\n";
break;

case 'l':
std::cout<<"You chose lizard and the computer chose paper!\n";
std::cout<<"Lizard eats paper!\n";
std::cout<<"You win!\n";
break;

case 'k':
std::cout<<"You chose Spock and the computer chose paper!\n";
std::cout<<"Spock is disproved by paper!\n";
std::cout<<"You win!\n";
break;

}
}

void scissors(char choice)
{
    
}

void lizard(char choice)
{
    
}

void spock(char choice)
{
    
}
*/