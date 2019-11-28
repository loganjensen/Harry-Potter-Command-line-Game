/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the player.cpp file. It contains the Player class member functions.
 *************************************************/
#include "player.hpp"

/*************************************************
 Player Constructor
 This construct initalizes the private member variables for
 name, trolleyDoorKey, storageKey, and spellbook. It also
 sets a size for the inventory of a player object.
 *************************************************/
Player::Player()
{
    name = "Harry Potter";
    trolleyDoorKey = false;
    storageKey = false;
    spellbook = false;
    
    //Set limit for 50 items(strings) the player can hold at a time. Player will never go out of this bound
    items.reserve(50);
}


/*************************************************
 Setter Functions
 *************************************************/
void Player::setCurrentSpace(Space* currentSpace)
{
    this->currentSpace = currentSpace;
}

void Player::setTrolleyDoorKey(bool key)
{
    this->trolleyDoorKey = key;
}

void Player::setStorageKey(bool key)
{
    this->storageKey = key;
}

void Player::setSpellbook(bool spellbook)
{
    this->spellbook = spellbook;
}

/*************************************************
 Getter Functions
 *************************************************/
Space* Player::getCurrentSpace()
{
    return currentSpace;
}

bool Player::getTrolleyDoorKey()
{
    return trolleyDoorKey;
}

bool Player::getStorageKey()
{
    return storageKey;
}

bool Player::getSpellbook()
{
    return spellbook;
}


/*************************************************
 addItem
 This function returns no values, but takes in a string. It
 uses that string to add the parameter to the vector of
 items for the player. It then outputs a message of that item being
 pushed onto the vector.
 *************************************************/
void Player::addItem(std::string item)
{
    //Add passed item to inventory
    this->items.push_back(item);
    
    std::cout << "***************************************************" << std::endl;
    std::cout << item << " was added to Harry's inventory." << std::endl;
    std::cout << "***************************************************" << std::endl;
}


/*************************************************
 hasItem
 This function takes in a string and returns a boolean. It searches
 the vector items for a match to the passed string, and returns true if
 it found a match. Otherwise, the function returns false.
 *************************************************/
bool Player::hasItem(std::string item)
{
    //Loop through items
    for (int i = 0; i < this->items.size(); i++)
    {
        //Search through items
        if (items[i] == item)
        {
            //If there is a match, then return true
            return true;
        }
    }
    
    //Otherwise, return false if no match is found
    return false;
}


/*************************************************
 moveForward
 This function takes no parameters and returns no values.
 It is used to move a player object to a new Space object,
 moving in the direction forward. It tests if there is a Space object
 linked forward to the current one, and moves the player if there is.
 It also tests if that room needs a key, and stops the player if they
 do not have the required key.
 *************************************************/
void Player::moveForward()
{
    //If nullptr, cannot move forward
    if (currentSpace->getTop() == nullptr)
    {
        std::cout << "There's nothing forward." << std::endl;
    }
    else
    {
        //If room does not require a key, move forward
        if (currentSpace->getTop()->getNeedsKey() == false)
        {
            std::cout << "You move forward." << std::endl;
            
            //Change to next forward room
            this->currentSpace = currentSpace->getTop();
            
            std::cout << "You are now " << currentSpace->getName() << std::endl;
        }
        //If the room requires a key
        else if (currentSpace->getTop()->getNeedsKey() == true)
        {
            //If the player has the trolley door key
            if (getTrolleyDoorKey())
            {
                //Player moves forward if they do have the key
                std::cout << "You use your key to move forward." << std::endl;
                
                this->currentSpace = currentSpace->getTop();
                
                std::cout << "You are now " << currentSpace->getName() << std::endl;
            }
            else
            {
                //Otherwise, print message that player needs key to move forward
                std::cout << "This room is locked. You need a key to move forward." << std::endl;
            }
        }
    }
}


/*************************************************
 moveRight
 This function takes no parameters and returns no values.
 It is used to move a player object to a new Space object,
 moving in the direction right. It tests if there is a Space object
 linked right to the current one, and moves the player if there is.
 It also tests if that room needs a key, and stops the player if they
 do not have the required key.
 *************************************************/
void Player::moveRight()
{
    //If nullptr, can't go that way
    if (currentSpace->getRight() == nullptr)
    {
        std::cout << "There's nothing to the right." << std::endl;
    }
    else
    {
        //If the room does not need a key, then move
        if (currentSpace->getRight()->getNeedsKey() == false)
        {
            std::cout << "You move to the right." << std::endl;
            
            //Change current space to right space
            this->currentSpace = currentSpace->getRight();
            
            std::cout << "You are now " << currentSpace->getName() << std::endl;
        }
        //If the room to the right needs a key
        else if (currentSpace->getRight()->getNeedsKey() == true)
        {
            //Check if the player has the key
            if (getStorageKey())
            {
                //Player moves forward with the key
                std::cout << "You use your key to move to the right." << std::endl;
                
                this->currentSpace = currentSpace->getRight();
                
                std::cout << "You are now " << currentSpace->getName() << std::endl;
            }
            else
            {
                //Otherwise, print message that player needs key
                std::cout << "This room is locked. You need a key to move to the right." << std::endl;
            }
        }
    }
}


/*************************************************
 moveLeft
 This function takes no parameters and returns no values.
 It is used to move a player object to a new Space object,
 moving in the direction left. It tests if there is a Space object
 linked left to the current one, and moves the player if there is.
 *************************************************/
void Player::moveLeft()
{
    //If nullptr, can't go that way
    if (currentSpace->getLeft() == nullptr)
    {
        std::cout << "There's nothing to the left." << std::endl;
    }
    else
    {
        std::cout << "You move to the left." << std::endl;

        //Change current space to left space
        this->currentSpace = currentSpace->getLeft();
        
        std::cout << "You are now " << currentSpace->getName() << std::endl;
    }
}


/*************************************************
 moveBack
 This function takes no parameters and returns no values.
 It is used to move a player object to a new Space object,
 moving in the direction backward. It tests if there is a Space object
 linked backward to the current one, and moves the player if there is.
 *************************************************/
void Player::moveBack()
{
    //If at the back of the train, then cannot move any more backward
    if (currentSpace->getBottom() == nullptr)
    {
        std::cout << "There's nothing backward." << std::endl;
    }
    else
    {
        std::cout << "You move backward." << std::endl;
        
        currentSpace = currentSpace->getBottom();
        
        std::cout << "You are now " << currentSpace->getName() << std::endl;
    }
}
