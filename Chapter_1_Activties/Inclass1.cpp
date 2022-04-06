#include <iostream>


int main()
{
    int number1, number2;

    std::cout<<"Enter two integer numbers\n ";

    std::cin>>number1;
    std::cin>>number2;

    int sum = number1 + number2;

    int product = number1 * number2;

    std::cout<<"The sum of the the two integers are "<< sum <<"\n";
    
    std::cout<<"The product of the two integers are "<< product << "\n";

    std::cout<<"This is the end of the program.\n";




}