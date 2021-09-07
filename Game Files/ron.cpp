/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the ron.cpp file. It contains the Ron class member functions.
 *************************************************/
#include "ron.hpp"
#include "player.hpp"

/*************************************************
 Ron Constructor
 This constructor takes no parameters, but sets the
 bool asleep to true so that Ron is sleeping at the
 beginning of a Hogwarts Express game.
 *************************************************/
Ron::Ron()
{
    //Initalize ron as sleeping
    asleep = true;
}


/*************************************************
 look
 This function takes no parametes and returns no values. It uses
 the bool asleep to check and output a message depending on if
 Ron is asleep or awake.
 *************************************************/
void Ron::look()
{
    std::string ronState;
    
    //If Ron is asleep, print that ron is asleep
    if (this->getAsleep())
    {
        ronState = "Ron is asleep.";
    }
    else
    {
        //Otherwise, Ron is awake.
        ronState = "Ron is awake.";
    }
    
    std::cout << "You look and see that " << ronState << std::endl;
}


/*************************************************
 talk
 This function represents talking with a Ron object. It takes
 no parameters and returns no values. It outputs a different message
 depending on if Ron is awake or asleep.
 *************************************************/
void Ron::talk()
{
    if (this->getAsleep())
    {
        //If Ron is asleep, he cannot talk
        std::cout << "Ron cannot talk at the moment, he is asleep." << std::endl;
    }
    else
    {
        std::cout << "Harry! Blimey! I'm awake!" << std::endl;
        std::cout << "My head...ow!" << std::endl;
        std::cout << "Are you going to save us, Harry?" << std::endl;
        std::cout << "Did you use the key I gave you?" << std::endl;
    }
}


/*************************************************
 castSpell
 This function takes no parameters and returns no values.
 This function has a different outcomes based on if the player
 has the item Coffee. If so, then Ron stays awake and gives Harry
 an item. If the player does not have the Coffee item, then it outputs a
 message that Ron cannot stay awake.
 *************************************************/
void Ron::castSpell()
{
    if (this->player->hasItem("Coffee"))
    {
       //If player has coffee, then Ron wakes up and gives harry a key
        std::cout << "Harry waves his wand, and Ron awakens. Harry gives him the Coffee." << std::endl;
        std::cout << "Ron: \"Harry! Thank you for saving me." << std::endl;
        std::cout << "That death eater's charm was strong." << std::endl;
        std::cout << "Only this coffee could keep me (and software engineers) awake!" << std::endl;
        std::cout << "Here, I have a key to the train car past the Trolley Car." << std::endl;
        std::cout << "Take it!\"" << std::endl;
        
        //Add key to inventory, set boolean to true
        this->player->addItem("Trolley Car Door Key");
        this->player->setTrolleyDoorKey(true);
        
        //Set ron to be awake
        this->setAsleep(false);
    }
    else
    {
        //If the player does not have Coffee, ron is still sleeping
        std::cout << "Ron: \"Harry! I can't stop sleeping! I...think the only thing..." << std::endl;
        std::cout << "that can keep me awake is...*yawns*...some coffee." << std::endl;
        std::cout << "With Bertie Botts every flavored creamer!\"" << std::endl;
        std::cout << "...Ron fell back asleep. Harry's spell was not powerful enough to keep him awake." << std::endl;
    }
}




/*************************************************
 Setter Functions
 *************************************************/
void Ron::setAsleep(bool asleep)
{
    this->asleep = asleep;
}


/*************************************************
 Getter Functions
 *************************************************/
bool Ron::getAsleep()
{
    return asleep;
}
