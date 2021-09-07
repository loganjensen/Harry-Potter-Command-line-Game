/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the slytherincar.cpp file. It contains the SlytherinCar class member functions.
 *************************************************/
#include "slytherincar.hpp"
#include "menu.hpp"

/*************************************************
 SlytherinCar Constructor
 This constructor takes no parameters. It sets the
 needsKey boolean to be true so that a key is needed
 to access this Space.
 *************************************************/
SlytherinCar::SlytherinCar() : Space()
{
    //Set the needskey boolean to be true
    this->setNeedsKey(true);
}


/*************************************************
 look
 This function takes no parameters and returns no values.
 It outputs a message about the surroundings in the
 SlytherinCar Space. The car is dark, so the player must choose for Harry
 to cast a spell in order to get any valuable information about the surroundings.
 *************************************************/
void SlytherinCar::look()
{
    int getChoice;
    
    std::cout << "It's so dark in here. You can't see a thing." << std::endl;
    std::cout << "What would you like to do?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Cast a spell" << std::endl;
    std::cout << "2. Squint really hard" << std::endl;
    getChoice = getInteger();
    
    //Validate input
    while (getChoice < 1 || getChoice > 2)
    {
        std::cout << "The only options are 1 or 2. Try again." << std::endl;
        getChoice = getInteger();
    }
    
    if (getChoice == 1)
    {
        std::cout << "Harry waves his wand, and a stream of light emerges." << std::endl;
        std::cout << "You see a door in front of you. There's a...mechanical noise coming from it." << std::endl;
        std::cout << "To your right, you see Draco Malfoy." << std::endl;
        std::cout << "To your left is nothing." << std::endl;
        std::cout << "Behind you is the Trolley Car." << std::endl;
    }
    else if (getChoice == 2)
    {
        std::cout << "Harry tries to squint, but still cannot see anything. It's too dark." << std::endl;
    }
 
}


/*************************************************
 talk
 This function takes no parameters and returns no values.
 It outputs a message saying that there is no one there to talk
 to since there is no one in this Space who can talk.
 *************************************************/
void SlytherinCar::talk()
{
    std::cout << "There is no one to talk to right here." << std::endl;
}


/*************************************************
 castSpell
 This function takes no parameters and returns no values.
 It outputs a message that the player cannot cast a spell
 in the SlytherinCar Space.
 *************************************************/
void SlytherinCar::castSpell()
{
    std::cout << "There is no reason to cast a spell here." << std::endl;
}
