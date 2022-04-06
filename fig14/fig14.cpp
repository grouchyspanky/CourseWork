#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

enum class ErrorCodes:int
{
    FAILED_OPEN_WRITE = 1,
    FAILED_OPEN_READ = 2
};


int main() {
    ofstream outClientFile{"clients.txt"};

    if (!outClientFile) {
        cerr << "File could not be opened " <<endl;
        exit(EXIT_FAILURE);
    }

    cout<<"Enter the coount, name and balance. \n"
        <<"Enter end-of-file to end input.\n?";

    int account;
    string name;
    double balance;

    while (cin>> account >> name >> balance ) {
        outClientFile << account << ' ' << name << ' ' << balance <<endl;
        cout << "? ";
    }





}