/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the ron.hpp file. It contains the Ron class definition.
 *************************************************/
#include "space.hpp"

#ifndef RON_HPP
#define RON_HPP

/*************************************************
 Ron Class
 This class inherits from the Space class. This class
 represents Ron Weasley on the Hogwarts Express. It contains
 a bool to track if Ron is sleeping in the game, as well as
 a constructor, and the look, talk, and castSpell functions to
 interact with a Ron object.
 *************************************************/
class Ron : public Space
{
private:
    bool asleep;
    
public:
    Ron();
    
    void look();
    void talk();
    void castSpell();
    
    void setAsleep(bool);
    bool getAsleep();
};

#endif /* RON_HPP */
