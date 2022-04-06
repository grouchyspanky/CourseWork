#include <stdexcept>
#include <iomanip>
#include "tictactoe.h"


TicTacToe::TicTacToe()
{
    init();
}

void TicTacToe::init()
{
    currentStatus = INPLAY;

    for (size_t i = 0; i < DIMENSION; ++i)
        for (size_t j= 0; j < DIMENSION; ++j)
        grid[i][j] = EMPTY;
    

}

void TicTacToe::reset()
{
    init();
}

void TicTacToe::makeMove(Players player,size_t row, size_t col)
{
    if(player == EMPTY || grid[row][col] != EMPTY
     || row < 0 || row>= DIMENSION || col < 0 || col>= DIMENSION)
     {
        throw std::invalid_argument("Illegal Move");
     }

    grid[row][col] = player;



}

void TicTacToe::updateStatus()
{
    bool rowWin;
    bool colWin;
    for (size_t row = 0; row < DIMENSION - 1; ++row)
    {
        rowWin = true;
        colWin = true;

        for (size_t col = 0; col < DIMENSION - 1; ++col)
        {
            if(grid[col][row] != grid[col][row+1])
            {
                rowWin = false;
                continue;
            
            }
        }
        if (colWin)




        if(rowWin)
            currentStatus = (grid[row][0] == X) ? WIN : LOST;

    }
    
}

Status TicTacToe::getStatus() 
{return currentStatus;};

void TicTacToe::printGameState()
{
    for (size_t i = 0; row < DIMENSION; i++)
    {
        std::cout<<grid[row][0];
        
        for (size_t col = 0; col < DIMENSION; i++)
        {
            std::cout<<' | '<<grid[row][0];
        }
        
        if(row < DIMENSION -1) 
        std::cout<< "\n---------\n";
        else 
            std::cout<<std::endl;
        
    }
    
}