/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the caboose.cpp file. It contains the Caboose Class member functions.
 *************************************************/
#include "caboose.hpp"

#include <iostream>

/*************************************************
 Caboose Constructor
 This default constructor takes no parameters and sets
 no private member variables.
 *************************************************/
Caboose::Caboose() : Space()
{
}


/*************************************************
 look
 This function takes no parameters and returns no values.
 It outputs a message about the environment of the caboose
 if the player chooses to look around the caboose.
 *************************************************/
void Caboose::look()
{
    std::cout << "You see your best friend, Ron Weasley, to your left." << std::endl;
    std::cout << "There is Storage to your right." << std::endl;
    std::cout << "There is nothing behind you." << std::endl;
    std::cout << "In front of you is a door, and you smell something delicious." << std::endl;
}


/*************************************************
 talk
 This function takes no parameters and returns no values.
 It outputs a message about the environment of the caboose
 if the player chooses to try to talk while in the caboose.
 *************************************************/
void Caboose::talk()
{
    std::cout << "There is no one to talk to here." << std::endl;
}


/*************************************************
 castSpell
 This function takes no parameters and returns no values.
 It outputs a message about the environment of the caboose
 if the player chooses to try to cast a spell in the caboose.
 *************************************************/
void Caboose::castSpell()
{
    std::cout << "There is no reason to cast a spell here." << std::endl;
}
