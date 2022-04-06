#include <stdexcept>
#include <iomanip>
#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>

enum {INGAME,WIN,LOSE}; //enums

const int DUNGEONSIZE = 4; // const dungeon size to create 4x4 array
int dungeon[DUNGEONSIZE][DUNGEONSIZE] = {{0,0,0,0} , 
                                        {0,0,0,0}, 
                                        {0,0,0,0}, 
                                        {0,0,0,0}};



void placePlayer() // places the player at 0,0 top left corner of dungeon
{

dungeon[0][0] = 1; 

}



void placeGold() //places gold at random place that is not 1,0 0,0 0,1
{

    srand(time(0));
 
  int val1 = rand() % 4;
  int val2 = rand() % 4;
 
 if((val1 == 1 && val2 == 0) || (val1 == 0 && val2 == 1) || (val1 == 0 && val2 == 0))
  {
    
    int val1 = rand() % 4;
    int val2 = rand() % 4;
    }
  
  dungeon[val1][val2] = 2;

}

void placePits() //places 3 pits randomly that is not 1,0 0,0 0,1 or the location in which gold is
{

    for(int i = 0; i < 2; ++i)
 {
    int val1 = rand() % 3;
    int val2 = rand() % 3;
 
    if((val1 == 1 && val2 == 0) || (val1 == 0 && val2 == 1) || (val1 == 0 && val2 == 0))
    {
    int val1 = rand() % 3;
    int val2 = rand() % 3;
    }

    else if (dungeon[val1][val2] == 2)
    dungeon[val1][val2] = 2;
    
    else
    dungeon[val1][val2] = 3;
    
    }
}

void placeBoobah() // places boobah in random place that is not 1,0 0,0 0,1 or on gold or in a pit
{

    int val1 = rand() % 3;
    int val2 = rand() % 3;
 
   
    if((val1 == 1 && val2 == 0) || (val1 == 0 && val2 == 1) || (val1 == 0 && val2 == 0))
    {
      placeBoobah();
    }
    
    else if (dungeon[val1][val2] == 2 || dungeon[val1][val2] == 3)
    placeBoobah();
  
    else
    dungeon[val1][val2] = 4;

    
}

void intDungeon() // dungeon that stores all values that are related to whats there
{

for (int i = 0; i < DUNGEONSIZE; ++i)
{
    std::cout<<"----------------\n";
    std::cout<<"|";
    for (int j = 0; j < DUNGEONSIZE; ++j)
     {   
         
         std::cout<<" "<<dungeon[i][j]<<" |";
         

     }
     std::cout<<std::endl;}

std::cout<<"-----------------\n";
}

void charDungeon() // game board for player to see builds off of values in the intdungeon
{
    std::cout<<"BooBah Dungeon Simulator\n"; 
    std::cout<<"Avoid at all costs the pits and the evil BooBah, cursed be his name.\n";
    char gameDungeon[DUNGEONSIZE][DUNGEONSIZE] ={{' ',' ',' ',' '} , 
                                                {' ',' ',' ',' '}, 
                                                {' ',' ',' ',' '}, 
                                                {' ',' ',' ',' '}}; 

        for(int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
    {

        if (dungeon[i][j] == 1)
        {
        gameDungeon[i][j] = 'U';
        }    
        
        else if (dungeon[i][j] == 2)
        {
        gameDungeon[i][j] = 'G';
        }
        
        else if (dungeon[i][j] == 3)
        {
        gameDungeon[i][j] = 'P';
        }
        
        else if (dungeon[i][j] == 4)
        {
        gameDungeon[i][j] = 'B';
        }
        
        else
        {
        gameDungeon[i][j] = ' ';
        }

    }
    
}

for (int i = 0; i < DUNGEONSIZE; ++i)
{
    std::cout<<"----------------\n";
    std::cout<<"|";
    for (int j = 0; j < DUNGEONSIZE; ++j)
     {   
         
         std::cout<<" "<<gameDungeon[i][j]<<" |";
         

     }
     std::cout<<std::endl;}

std::cout<<"-----------------\n";
}

bool gameStatus(int gameStat) // checks status of game whenever the player makes a valid move
{

}

void playerMove() // movement function for when the player moves
{
    char choice;
    
    std::cout<<"Enter Your move\n (R)ight, (L)eft, (U)p, (D)own, (P)ickup gold:";
    std::cin>>choice;


 










    }

 void playGame() // heart function contains calls to respective functions
{

    placePlayer();
    
    placeGold();

    placePits();
    
    placeBoobah();

    std::cout<<std::endl;

    charDungeon();

    void playerMove();
    



};