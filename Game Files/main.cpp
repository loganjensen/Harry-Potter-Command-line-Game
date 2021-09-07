/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the main.cpp file.
 *************************************************/
#include "hogwartsExpress.hpp"
#include "menu.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int menuChoice;
    
    //Declare variable to limit number of actions a player can do
    int playerStepLimit = 50;

    //Create new game board, and get the player pointer
    HogwartsExpress* hogwartsExpress = new HogwartsExpress();
    Player* player = hogwartsExpress->getPlayer();
    
    displayGameInstructions();
    
    bool playGame = true;
    
    //Do while the player has not chosen to exit the game and there are still actions remaining
    do
    {
        //Output how many steps players has left
        cout << endl;
        cout << "Harry has " << playerStepLimit << " actions left. Hurry!" << endl;
        cout << endl;
        
        displayMenuOptions();
        menuChoice = getInteger();
        
        //Vaidate input
        while (menuChoice > 8 || menuChoice < 1)
        {
            cout << "Invalid. Please choose a valid option." << endl;
            menuChoice = getInteger();
        }
        
        switch (menuChoice)
        {
            case 1:
                cout << endl;
                player->getCurrentSpace()->look();
                break;
            case 2:
                cout << endl;
                player->getCurrentSpace()->talk();
                break;
            case 3:
                cout << endl;
                player->getCurrentSpace()->castSpell();
                break;
            case 4:
                cout << endl;
                player->moveForward();
                break;
            case 5:
                cout << endl;
                player->moveBack();
                break;
            case 6:
                cout << endl;
                player->moveRight();
                break;
            case 7:
                cout << endl;
                player->moveLeft();
                break;
            case 8:
                cout << endl;
                playGame = false;
                break;
        }
        
        //Decrement players step limit every turn
        playerStepLimit--;
        
    } while (playGame && playerStepLimit != 0);
    
    //Output message if player has reached action limit
    if (playerStepLimit == 0)
    {
        cout << endl;
        cout << "Oh no! You've run out of actions. Did you stop the train?" << endl;
        cout << "If not, try again! If you did, congratulations!" << endl;
    }
    
    cout << "*******************" << endl;
    cout << "Thanks for playing!" << endl;
    cout << "*******************" << endl;
    
    //Deallocate memory
    delete hogwartsExpress;
    
    return 0;
}
