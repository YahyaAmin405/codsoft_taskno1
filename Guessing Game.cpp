#include <iostream>
#include <cstdlib>
#include <ctime>
#include<conio.h>

using namespace std;

int main() {
    //SETTING UP THE SEED
    srand(time(NULL));

    cout<<"\t*******NUMBER GUESSING GAME*******"<<endl;

    cout<<endl<<"******COMPUTER IS GUESSING THE NUMBER******"<<endl;

    cout<<endl<<"Press any key to start the game."<<endl;
    getch();

    //  DECLARATION OF VARIABLE

    int computer_num=rand() % 1000 + 1;;
    int user_num;
    int attempts;

    //DEFINING VARIABLE
    computer_num= rand() % 1000 + 1;
    attempts=0;

    //SETTING UP THE GAME
    while (true) {
        cout <<endl<< "Enter your guess (between 1 and 1000): ";
        cin >> user_num;
        attempts++;

        if (user_num < computer_num)
            {
            cout <<endl<< "Too low! Try again." << endl;
            }
        else if (user_num > computer_num)
            {
            cout <<endl<< "Too high! Try again." << endl;
            }
        else
            {
            cout <<endl<< "Congratulations! YOU WIN BY GUESSING COMPUTER NUMBER " << computer_num << " in " << attempts << " attempts." << endl;
            break;  // Exit the loop when the correct number is guessed
            }
    }

    return 0;
}

