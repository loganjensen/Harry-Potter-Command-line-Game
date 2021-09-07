/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the storage.cpp file. It contains the member functions for the Storage class.
 *************************************************/
#include "storage.hpp"
#include "player.hpp"

/*************************************************
 Storage Constructor
 This class takes no parameters, but sets the needsKey
 boolean to be true since a player needs a key to enter
 this space.
 *************************************************/
Storage::Storage()
{
    this->setNeedsKey(true);
}


/*************************************************
 look
 This function takes no parameters and returns no values. It
 outputs a message describing the surroundings of the Storage space.
 *************************************************/
void Storage::look()
{
    std::cout << "Harry looks around, and sees lots of luggage." << std::endl;
    std::cout << "Which bag is Draco's?" << std::endl;
    std::cout << "They all look the same..." << std::endl;
    std::cout << "Perhaps a spell could help..." << std::endl;
}


/*************************************************
 talk
 This function takes no parameters and returns no values.
 It outputs a message that there is no one to talk to in the
 Storage space.
 *************************************************/
void Storage::talk()
{
    std::cout << "There's no one to talk to here. Unless you like to talk to luggage." << std::endl;
}


/*************************************************
 castSpell
 This function takes no parameters and returns no values. If the player
 chooses to use this function, then they have a Spellbook added
 to their inventory, and a message is display saying so.
 *************************************************/
void Storage::castSpell()
{
    std::cout << "Harry waves his wand high into the air." << std::endl;
    std::cout << "Harry: \"Accio Spellbook!\"" << std::endl;
    std::cout << "A green suitcase rises, rips open, and a book emerges." << std::endl;
    std::cout << "The book flies into Harry's hands." << std::endl;
    
    //Give spellbook item to player
    this->player->addItem("Spellbook");
    this->player->setSpellbook(true);
}
