#include <iostream>
#include <cmath>


void even(int userval){

int temp = userval;

if(temp == 0){
std::cout<<" is an even integer\n";
}
else if(temp == 1){
std::cout<< " is an odd integer\n";
}
else
even(temp % 2);
}

int main(){

int val{0};

std::cout<<"Enter an integer: \n";
std::cin>>val;
std::cout<<val;

even(val);

























}