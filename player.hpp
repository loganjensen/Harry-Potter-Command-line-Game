/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the player.hpp file. It contains the Player class definition.
 *************************************************/
#include <iostream>
#include <vector>
#include "space.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

/*************************************************
 Player Class
 This class represents a player on the game HogwartsExpress.
 It contains member variables to track the status of the Space the
 player is in, as well as variables for the player's inventory. There
 are many setter and getter functions, as well as functions to add and search
 for items in the player's inventory. It also contains functionality to move
 the player object in 4 directions.
 *************************************************/
class Player
{
protected:
    std::string name;
    
    Space *currentSpace;
    
    //Holds the characters items
    std::vector<std::string> items;
    
    bool trolleyDoorKey;
    bool storageKey;
    bool spellbook;
    
public:
    Player();

    void setCurrentSpace(Space*);
    void setTrolleyDoorKey(bool);
    void setStorageKey(bool);
    void setSpellbook(bool);
    
    Space* getCurrentSpace();
    bool getTrolleyDoorKey();
    bool getStorageKey();
    bool getSpellbook();
    
    void addItem(std::string);
    bool hasItem(std::string);
    
    void moveForward();
    void moveRight();
    void moveLeft();
    void moveBack();
    
};

#endif /* PLAYER_HPP */
