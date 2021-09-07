/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the trolleycar.cpp file. It contains the TrolleyCar class member functions.
 *************************************************/
#include "trolleycar.hpp"
#include "player.hpp"

/*************************************************
 TrolleyCar Constructor
 This default constructor takes no parameters and sets
 no private member variables.
 *************************************************/
TrolleyCar::TrolleyCar() : Space()
{
    
}


/*************************************************
 look
 This function takes no parameters and returns no values.
 It outputs a message about the surroundings in the TrolleyCar.
 *************************************************/
void TrolleyCar::look()
{
    std::cout << "You look ahead and see a door to the next train car." << std::endl;
    std::cout << "Behind you is the Caboose." << std::endl;
    std::cout << "There is nothing to your right or your left." << std::endl;
    std::cout << "There is, however, the trolley cart, full of sugary, caffeinated" << std::endl;
    std::cout << "sweets and drinks. The coffee could wake anyone up..." << std::endl;
}


/*************************************************
 talk
 This function takes no parameters and returns no values.
 It is used to "talk" in the TrolleyCar, but there is no one
 to talk to, so it simply outputs a message about the Trolley Witch.
 *************************************************/
void TrolleyCar::talk()
{
    std::cout << "You try to talk to the trolley witch, but she is" << std::endl;
    std::cout << "slumped over the handle of the trolley cart, sleeping from the" << std::endl;
    std::cout << "death eaters' charm." << std::endl;
    std::cout << "The trolley witch begins talking, as if from a dream..." << std::endl;
    std::cout << "Trolley Witch: \"...anything from...the trolley dears?\"" << std::endl;
    std::cout << "She falls back asleep." << std::endl;
}


/*************************************************
 castSpell
 This function takes no parameters and returns no values.
 It outputs a message about what happens and then adds Coffee
 to the inventory of the player.
 *************************************************/
void TrolleyCar::castSpell()
{
    std::cout << "Harry waves his wand, and the trolley cart begins to move forcefully." << std::endl;
    std::cout << "The coffee pot rises up and pours itself into a coffee mug." << std::endl;
    std::cout << "The coffee levitates over to Harry, who grabs it and puts it" << std::endl;
    std::cout << "into his inventory." << std::endl;
    
    //Add item to player's inventory
    this->player->addItem("Coffee");
}
