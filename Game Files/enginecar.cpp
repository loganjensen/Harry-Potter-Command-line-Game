/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the enginecar.cpp file. It contains the EngineCar class member functions.
 *************************************************/
#include "enginecar.hpp"
#include "player.hpp"

/*************************************************
 Caboose Constructor
 This default constructor takes no parameters, but it
 sets the boolean to true that the engine is running.
 This is used in the gameplay of the Hogwarts Express game.
 *************************************************/
EngineCar::EngineCar() : Space()
{
    isRunning = true;
}


/*************************************************
 look
 This function takes no parameters and returns no values.
 It outputs a message about the environment of draco
 if the player chooses to look around the EngineCar. It outputs
 a different message depending on if the engine is running or not.
 *************************************************/
void EngineCar::look()
{
    if (isRunning)
    {
        std::cout << "This is the Engine room, the head of the Hogwarts Express." << std::endl;
        std::cout << "The engine is running furiously, and it seems like nothing can stop it." << std::endl;
        std::cout << "The death eaters have charmed the engine to keep running." << std::endl;
        std::cout << "Only a powerful spell can stop this engine." << std::endl;
    }
    else
    {
        std::cout << "The engine is quiet..." << std::endl;
        std::cout << "It's not runnning." << std::endl;
    }
}


/*************************************************
 talk
 This function takes no parameters and returns no values.
 It outputs a message when a player tries to talk in the
 EngineCar. Because there is no one there, it outputs a message
 that there is no one to talk to.
 *************************************************/
void EngineCar::talk()
{
    std::cout << "There is no one to talk to in here." << std::endl;
}


/*************************************************
 castSpell
 This function takes no parameters and returns no values.
 It represents when a player tries to cast a spell at the engine.
 If the player has the Spellbook item, then they know the spell to stop the train
 and win the game. Otherwise, it outputs a message that the player is not strong enough
 to stop the engine.
 *************************************************/
void EngineCar::castSpell()
{
    //If the player has the spellbook
    if (this->player->hasItem("Spellbook"))
    {
        std::cout << "Harry waves his wand mightily into the air!" << std::endl;
        std::cout << "Harry: \"FINITE INCANTATEM!\"" << std::endl;
        std::cout << "The engine begins to slow down...and finally stops." << std::endl;
        std::cout << "Harry has done it! You've saved everyone!" << std::endl;
        std::cout << std::endl;
        std::cout << "*************************" << std::endl;
        std::cout << "CONGRATULATIONS! YOU WIN!" << std::endl;
        std::cout << "*************************" << std::endl;
        std::cout << std::endl;
        std::cout << "Press 8 to exit the game, or continue to explore until you have no more actions!" << std::endl;
        
        //Change boolean that the engine is not running anymore
        isRunning = false;
    }
    else
    {
        //Otherwise, if the player does not have the spellbook, they cannot stop it
        std::cout << "Harry waves his wand, but the engine does nothing." << std::endl;
        std::cout << "The death eater's charm is too powerful for Harry to break." << std::endl;
        std::cout << "If only I had a spellbook..." << std::endl;
    }
}
