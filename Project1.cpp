#include <iostream>
#include <ctime>
using namespace std;

// Project Rock, paper, scissors game

const string sys[] = {"ROCK", "PAPER", "SCISSORS"};

int main()
{
    int ch;
    int user;
    cout << "ROCK, PAPER AND SCISSORS GAME" << endl;
    cout << "Press 1 for Play - >" << endl;
    cout << "Other to Quit ->" << endl;
    cin >> ch;

    // Entering loop if user chooses to play

    while (ch == 1)
    {
        srand(time(NULL)); // seed for random number generator
        cout << "Enter your  choice\n1 for Rock\n2 for Paper\n3 for Scissors ->" << endl;
        // user will choose rock by pressing 1 , 2 for paper , 3 for scissor

        cin >> user;
        switch (user)
        {
        case 1: // when user chose rock
        {
            int com_choice = (rand() % 3) + 1; // random  number between 1 and 3
            cout << "You chose : ROCK" << endl;
            cout << "Computer chose : " << sys[com_choice - 1] << endl;
            if (com_choice == user) // when both user and computer chose same

            {
                cout << "It's a tie!" << endl;
            }
            else if (com_choice == 2) // if computer chose paper
            {
                cout << "Computer Wins !!" << endl;
            }
            else // if computer chose scissor
            {
                cout << "You wins !!" << endl;
            }
        }
        break;
        case 2: // when user choose paper
        {
            int com_choice = (rand() % 3) + 1; // random number  between 1 and 3
            cout << "You chose : PAPER" << endl;
            cout << "Computer chose : " << sys[com_choice - 1] << endl;
            if (com_choice == user) // when both chose same
            {
                cout << "It's a tie!" << endl;
            }
            else if (com_choice == 3) // if computer chose scissor
            {
                cout << "Computer Wins !!" << endl;
            }
            else // if computer chose rock
            {
                cout << "You wins !!" << endl;
            }
        }
        break;
        case 3: // when user chose scissor
        {
            int com_choice = (rand() % 3) + 1; // random number between 1 and 3
            cout << "You chose : SCISSORS" << endl;
            cout << "Computer chose : " << sys[com_choice - 1] << endl;
            if (com_choice == user) // when both chose same
            {
                cout << "It's a tie!" << endl;
            }
            else if (com_choice == 2) // if computer chose paper
            {
                cout << "You wins !!" << endl;
            }
            else // if comouter chose rock
            {
                cout << "Computer Wins !!" << endl;
            }
        }
        break;
        default: // when user enter invalid input (user choice < 1 and >3)
        {
            cout << "Invalid choice" << endl;
            continue;
        }
        break;
        }
        //  ask user to play again 1 for yes and 0 for no
        cout << "Do you want to play again (1 for Yes or 0 for No) : " << endl;
        cin >> ch;
    }
    cout << "Thanks for playing." << endl;
    return 0;
}