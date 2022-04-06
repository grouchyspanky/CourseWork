#include <iostream>
#include <string>
using namespace std;

int main() {

const double weekDayBetweenEightAndSix = .40;
const double weekDayBeforeEightAfterSix = .25;
const double weekendPrice = .15;
double rate;

char dayOfTheWeekFirstChar;
char dayOfTheWeekSecondChar;
double timeOfTheDay;
double lengthOfTheCall;
char choice = 'a';












cout<<"Would you like to use the program? y/Y n/N \n";

cin>>choice;

while(! (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N') )
{
    cout<<"Invalid input please enter y/Y or n/N \n";
    cin>>choice;
}


if (choice == 'n' || choice == 'N')
{
    cout<<"Thank you for your time!";
    return 0;
}


while (choice =='y' || choice == 'Y'){

cout<<"Enter in the time of the day for example 1:00 = 100\nFollowed by the day of the week Mo,Tu,We,Th,Fa,Sa, or Su\nFollowed by the length of the call\n";

cin>>timeOfTheDay;

while ((timeOfTheDay < 0) || (timeOfTheDay >2400))
{
    cout<<"Invalid input for time of the day, please put a time between 0 and 2400\n";

    cin >>timeOfTheDay;

}

cin >> dayOfTheWeekFirstChar;
cin >>dayOfTheWeekSecondChar;



switch (dayOfTheWeekFirstChar)
{
case 'M':
if ((timeOfTheDay >= 800) || (timeOfTheDay <= 1800))
{
    rate = weekDayBetweenEightAndSix;
}
else
rate = weekDayBeforeEightAfterSix;

case 'm':
if (timeOfTheDay >= 800 || timeOfTheDay <= 1800)
{
    rate = weekDayBetweenEightAndSix;
}
else
rate = weekDayBeforeEightAfterSix;

case 't':
if (timeOfTheDay >= 800 || timeOfTheDay <= 1800)
{
    rate = weekDayBetweenEightAndSix;
}
else
rate = weekDayBeforeEightAfterSix;

case 'T':
if (timeOfTheDay >= 800 || timeOfTheDay <= 1800)
{
    rate = weekDayBetweenEightAndSix;
}
else
rate = weekDayBeforeEightAfterSix;

case 'w':
if (timeOfTheDay >= 800 || timeOfTheDay <= 1800)
{
    rate = weekDayBetweenEightAndSix;
}
else
rate = weekDayBeforeEightAfterSix;

case 'W':
if (timeOfTheDay >= 800 || timeOfTheDay <= 1800)
{
    rate = weekDayBetweenEightAndSix;
}
else
rate = weekDayBeforeEightAfterSix;

case 's':
rate = weekendPrice;

case 'S':
rate = weekendPrice;


default:
    rate = weekDayBetweenEightAndSix;
}

cin>>lengthOfTheCall;


cout<<"The cost of the call is $"<<lengthOfTheCall * rate<<"\n";

cout<<"Would you like to use the program again? y/Y n/N\n";
cin>>choice;

while(! (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N') )
{
    cout<<"Invalid input please enter y/Y or n/N \n";
    cin>>choice;
}


if (choice == 'n' || choice == 'N')
{
    cout<<"Thank you for your time!";
    return 0;
}



}
















}