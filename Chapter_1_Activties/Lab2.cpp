#include <iostream>


int main() {

int number; 
int sumGreaterThanZero; 
int sumLessThanZero = 0;
int sumOfAll;

int averageOfPositive; 
int averageOfNegative; 
int averageOfAll;

int negativeCount;
int positiveCount;

for (int i = 0; i < 10; i++)
{
    std::cout<<"Enter in 10 numbers seperated by spaces\n";
    std::cin>>number;

    sumOfAll +=number;


    if(number <= 0)
    {
        
    
        sumLessThanZero += number;
        ++negativeCount;
    }
    
    else
    {
        sumGreaterThanZero +=number;
        ++positiveCount;
        

    }




}

averageOfPositive = sumGreaterThanZero / positiveCount;
averageOfNegative = sumLessThanZero / negativeCount;
averageOfAll= sumOfAll / 10;



std::cout<<"The positive sum is :"<<sumGreaterThanZero;

std::cout<<"\nThe average of positive numbers are:"<<averageOfPositive;

std::cout<<"\nThe negative sum is :"<<sumLessThanZero;

std::cout<<"\nThe average of negative numbers is:"<<averageOfNegative;

std::cout<<"\nThe sum of all numbers is :"<<sumOfAll;

std::cout<<"\nThe average of all numbers is:"<<averageOfAll;






}