#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

double userInput;
char choice;
bool validChoice = true;
int n = 0;

cout<<"Enter in a value\n";
cin>>userInput;


    
 while (validChoice = true) {


    


    for (int x = 0; x <10; ++x)
    {

    for (int i = 0; i <10; ++i)
    {
        n++;
        
        cout<<pow(exp(userInput),n) <<" ";



    }
    cout<<endl;
    
}




cout<<"Would you like to use the program again?\n";

cin>>choice;

if (choice == 'n' || choice == 'N'){
    break;
}



 }









}