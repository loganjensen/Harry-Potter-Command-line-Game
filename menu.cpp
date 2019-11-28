/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the menu.cpp file.
 *************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>

#include "menu.hpp"

using std::cout;
using std::cin;
using std::endl;

/*************************************************
 displayGameInstructions
 This function takes no parameters and returns no values.
 It is used to print the instructions of the game to the console.
 *************************************************/
void displayGameInstructions()
{
    cout << "**************************" << endl;
    cout << "     HOGWARTS EXPRESS     " << endl;
    cout << "**************************" << endl;
    cout << "Welcome to the Hogwarts Express." << endl;
    cout << "This is a fantasy game where you are Harry Potter, traveling" << endl;
    cout << "to Hogwarts on the Hogwarts Express. On the way, the train" << endl;
    cout << "was attacked by death eaters! They charmed everyone on the train" << endl;
    cout << "(Harry is unaffected) so that everyone is asleep, and charmed the" << endl;
    cout << "engine so that it won't stop running and will run off the tracks!" << endl;
    cout << "It is your duty to stop the train from crashing." << endl;
    cout << endl;
    cout << "You start as Harry in the back of the train." << endl;
    cout << "You are always facing toward the front of the train." << endl;
    cout << "The menu gives you different options to interact with the train." << endl;
    cout << "Use 1 to look at your surroundings." << endl;
    cout << "Use 2 to talk to anyone you might encounter." << endl;
    cout << "Use 3 to cast a spell, if needed. Harry knows many different spells." << endl;
    cout << "Use 4, 5, 6, and 7 to move throughout the train. Forward always" << endl;
    cout << "moves Harry toward the front of the train, and backwards always moves him toward the Caboose." << endl;
    cout << "Remember, HURRY, because there is only a little time left." << endl;
    cout << "You have 50 actions in TOTAL before the train runs off the tracks." << endl;
    cout << "Every action takes time, even if you try to move somewhere you cannot, so move thoughtfully." << endl;
    cout << "If you run out of time, you lose!" << endl;
    cout << "Let's play!" << endl;
    cout << "Sending you to the Hogwarts Express - good luck!" << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
}


/*************************************************
 displayMenuOptions
 This function takes no parameters and returns no values.
 It prinrts the menu options to the user.
 *************************************************/
void displayMenuOptions()
{
    cout << "What would you like to do?" << endl;
    cout << "1. Look at surroundings" << endl;
    cout << "2. Talk" << endl;
    cout << "3. Cast spell" << endl;
    cout << "4. Move forward" << endl;
    cout << "5. Move backward" << endl;
    cout << "6. Move to the right" << endl;
    cout << "7. Move to the left" << endl;
    cout << "8. Exit game" << endl;
}


/********************************************
 getInteger
 This function takes no parameters, but returns an integer.
 It validates an integer is input, and reprompts user until
 a valid integer is entered.
 Adapted from: https://stackoverflow.com/questions/40119366/how-to-check-if-the-input-number-integer-not-float
 ********************************************/
int getInteger()
{
    double choice;
    
    //Get the user's choice
    cin >> choice;
    
    while (cin.fail() || (choice-floor(choice)))
    {
        cout << "Invalid input. Please enter an integer." << endl;
        
        //Invalid input, reset buffer's state
        cin.clear();
        //Empty the buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        
        cin >> choice;
    }
    
    return choice;
}
