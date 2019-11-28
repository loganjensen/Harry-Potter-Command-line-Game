/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the space.hpp file. It contans the Space class member functions.
 *************************************************/
#include "space.hpp"

/*************************************************
 Space Constructor
 This constructor sets the private member variables top,
 right, bottom, and left to be nullptr when creating a Space
 class object. It also sets the needsKey boolean to be false by default.
 *************************************************/
Space::Space()
{
    top = nullptr;
    right = nullptr;
    bottom = nullptr;
    left = nullptr;
    
    //Initialize each room to not need a key
    needsKey = false;
}

/*************************************************
 Space Constructor
 This constructor takes in 4 Space pointers and
 sets them equal to the top, right, left, or bottom,
 respectively.
 *************************************************/
Space::Space(Space* top, Space* right, Space* left, Space* bottom)
{
    this->top = top;
    this->right = right;
    this->left = left;
    this->bottom = bottom;
}

/*************************************************
 Space Destructor
 *************************************************/
Space::~Space()
{
    
}


/*************************************************
 Getter Functions
 *************************************************/
Space* Space::getTop()
{
    if (this->top == nullptr)
    {
        return nullptr;
    }
    else
    {
        return this->top;
    }
}


Space* Space::getRight()
{
    if (this->right == nullptr)
    {
        return nullptr;
    }
    else
    {
        return this->right;
    }
}


Space* Space::getLeft()
{
    if (this->left == nullptr)
    {
        return nullptr;
    }
    else
    {
        return this->left;
    }
}


Space* Space::getBottom()
{
    if (this->bottom == nullptr)
    {
        return nullptr;
    }
    else
    {
        return this->bottom;
    }
}


bool Space::getNeedsKey()
{
    return needsKey;
}


std::string Space::getName()
{
    return name;
}


/*************************************************
 setSpace
 This function takes in 4 space pointers, a player pointer, and a string for the name
 of the space. This function is used to connect a space to other spaces, combine the
 spaces to a common player, and give each space a name.
 *************************************************/
void Space::setSpace(Space* top, Space* right, Space* left, Space* bottom, Player* player, std::string name)
{
    this->top = top;
    this->right = right;
    this->left = left;
    this->bottom = bottom;
    this->player = player;
    this->name = name;
}


/*************************************************
 Setter Functions
 *************************************************/
void Space::setNeedsKey(bool key)
{
    this->needsKey = key;
}
