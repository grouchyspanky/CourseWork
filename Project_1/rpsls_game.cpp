#include <iostream>
#include <cstdlib>
#include <string>


void showChoices(){ //shows the user their choices
std::cout<<"    (R)ock\n";
std::cout<<"    (P)aper\n";
std::cout<<"    (S)cissors\n";
std::cout<<"    (l)izard\n";
std::cout<<"    Spoo(K)\n";
std::cout<<"Enter the letter of your choice: ";
  
}

char getUserChoice(){ // Gets the users chocie

showChoices(); //shows choices

char userChoice; //grabs users choice
std::cin>>userChoice;

while(userChoice !='r'&& userChoice !='R' && userChoice !='p' && userChoice !='P' && userChoice !='s' && userChoice !='S' && userChoice !='l' && userChoice !='L'&& userChoice != 'k' && userChoice != 'K'){ // if input is invalid loop 
    std::cout<<"Invalid Input\n";
    std::cin>>userChoice;
    }
return userChoice;
}

void showRules() { //shows rules of the game

std::cout<<"The game is an expansion on the game Rock,Paper,Scissors. Each Player picks an object and reveals it at the same time using a hand gesture to replicate a rock,paper or scissors. The Winner is the one who defeats the other. In a draw(tie), the game is declared a draw and another game is played.\n";
std::cout<<"Scissors cuts paper. \n";
std::cout<<"Paper covers rock. \n";
std::cout<<"Rock crushes lizard. \n";
std::cout<<"Lizard poisons Spock. \n";
std::cout<<"Spock smashes scissors. \n";
std::cout<<"Scissors decapitates Lizard. \n";
std::cout<<"Lizard eats Paper. \n";
std::cout<<"Paper disproves Spock. \n";
std::cout<<"Spock vaporizes Rock. \n";
std::cout<<"Rock crushes Scissors. \n";


}

int getComputerChoice(){ //gets comps choice with rand() function value 1-5

int compChoice;

compChoice = rand()% 5 + 1;

return compChoice;
    
}

void rock(char userChoice){ // if comp chooses rock

if(userChoice == 'r' || userChoice == 'R'){

std::cout<<"You chose rock and the computer chose rock!\n";
std::cout<<"Its a draw!\n";
}

else if(userChoice =='p' || userChoice == 'P'){

std::cout<<"You chose paper and the computer chose rock!\n";
std::cout<<"Paper wraps around rock\n";
std::cout<<"You win!\n";
}

else if(userChoice =='s' || userChoice == 's'){

std::cout<<"You chose Scissors and the computer chose rock!\n";
std::cout<<"Scissors is smashed by rock!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='l' || userChoice == 'L'){

std::cout<<"You chose lizard and the computer chose rock!\n";
std::cout<<"Lizard is crushed by rock!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='k' || userChoice == 'K'){

std::cout<<"You chose Spock and the computer chose rock!\n";
std::cout<<"Spock vaporizes rock!\n";
std::cout<<"You win!\n";
}

}

void paper(char userChoice){ // if comp chooses paper


if(userChoice == 'r' || userChoice == 'R'){

std::cout<<"You chose rock and the computer chose paper!\n";
std::cout<<"Rock is wrapped by Paper!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='p' || userChoice == 'P'){

std::cout<<"You chose paper and the computer chose paper!\n";
std::cout<<"Its a draw!\n";
}

else if(userChoice =='s' || userChoice == 's'){

std::cout<<"You chose Scissors and the computer chose paper!\n";
std::cout<<"Scissors cuts paper\n";
std::cout<<"You win!\n";
}

else if(userChoice =='l' || userChoice == 'L'){

std::cout<<"You chose lizard and the computer chose paper!\n";
std::cout<<"Lizard eats paper!\n";
std::cout<<"You win!\n";
}

else if(userChoice =='k' || userChoice == 'K'){

std::cout<<"You chose Spock and the computer chose paper!\n";
std::cout<<"Spock is disproved by paper\n";
std::cout<<"You lose!\n";
}
  
}

void scissors(char userChoice){ // if comp chooses scissors

if(userChoice == 'r' || userChoice == 'R'){

std::cout<<"You chose rock and the computer chose scissors!\n";
std::cout<<"Rock smashes Scissors!\n";
std::cout<<"You win!\n";
}

else if(userChoice =='p' || userChoice == 'P'){

std::cout<<"You chose paper and the computer chose scissors!\n";
std::cout<<"Paper is cut by Sicssors!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='s' || userChoice == 's'){

std::cout<<"You chose Scissors and the computer chose scissors!\n";
std::cout<<"Its a draw!\n";
}

else if(userChoice =='l' || userChoice == 'L'){

std::cout<<"You chose lizard and the computer chose scissors!\n";
std::cout<<"Lizard is decapitated by Scissors!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='k' || userChoice == 'K'){

std::cout<<"You chose Spock and the computer chose scissors!\n";
std::cout<<"Spock vaporizes Scissors\n";
std::cout<<"You win!\n";
}

}

void lizard(char userChoice){ // if comp chooses lizard
    if(userChoice == 'r' || userChoice == 'R'){

std::cout<<"You chose rock and the computer chose lizard!\n";
std::cout<<"Rock crushes lizard!\n";
std::cout<<"You win!\n";
}

else if(userChoice =='p' || userChoice == 'P'){

std::cout<<"You chose paper and the computer chose lizard!\n";
std::cout<<"Paper is eaten by Lizard!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='s' || userChoice == 's'){

std::cout<<"You chose Scissors and the computer chose lizard!\n";
std::cout<<"Scissors decapitates Lizard!\n";
std::cout<<"You win!\n";
}

else if(userChoice =='l' || userChoice == 'L'){

std::cout<<"You chose lizard and the computer chose lizard!\n";
std::cout<<"Its a draw!\n";
}

else if(userChoice =='k' || userChoice == 'K'){

std::cout<<"You chose Spock and the computer chose lizard!\n";
std::cout<<"Spock is poisoned by Lizard!\n";
std::cout<<"You lose!\n";
}

}

void spock(char userChoice){ // if comp chooses spock

if(userChoice == 'r' || userChoice == 'R'){

std::cout<<"You chose rock and the computer chose Spock!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='p' || userChoice == 'P'){

std::cout<<"You chose paper and the computer chose Spock!\n";
std::cout<<"Paper disproves Spock!\n";
std::cout<<"You win!\n";
}

else if(userChoice =='s' || userChoice == 'S'){

std::cout<<"You chose Scissors and the computer chose Spock!\n";
std::cout<<"Scissors are smashed by Spock!\n";
std::cout<<"You lose!\n";
}

else if(userChoice =='l' || userChoice == 'L'){

std::cout<<"You chose lizard and the computer chose Spock!\n";
std::cout<<"Lizard poisons Spock!\n";
std::cout<<"You win!\n";
}

else if(userChoice =='k' || userChoice == 'K'){

std::cout<<"You chose Spock and the computer chose Spock!\n";
std::cout<<"Its a draw!\n";
}

}

void turn(char userChoice){ // completes a turn of the game and chooses case based off of compChoice

int compchoice = getComputerChoice();

switch(compchoice){

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
}

}


int main() 
{

showRules(); // rules of game
char input;
char userChoice;

std::cout<<"Would you like to play Rock-Paper-Scissors-Lizard-Spock? (y/n):\n";
std::cin>>input;

while(input != 'y' && input != 'Y' && input != 'n' && input != 'N'){ // if user doesnt enter valid input

std::cout<<"Invalid Input\n";
std::cout<<"Would you like to play Rock-Paper-Scissors-Lizard-Spock? (y/n):\n";
std::cin>>input;
}

while(input =='y'|| input =='Y'){ // user wants to play game

userChoice = getUserChoice();

turn(userChoice);

std::cout<<"Would you like to play Rock-Paper-Scissors-Lizard-Spock again? (y/n):\n"; //asks to play again
std::cin>>input;

while(input != 'y' && input != 'Y' && input != 'n' && input != 'N'){ // if user doesnt enter valid input

std::cout<<"Invalid Input\n";
std::cout<<"Would you like to play Rock-Paper-Scissors-Lizard-Spock Again? (y/n):\n";
std::cin>>input;
}




if(input =='n' || input == 'N'){ //user does not want to play game again
std::cout<<"Good bye thanks for playing!\n";
return 0;

}

}

if(input =='n' || input == 'N'){ //user never wanted to start playing the game
std::cout<<"Good bye!\n";
return 0;

}


return 0;

}

