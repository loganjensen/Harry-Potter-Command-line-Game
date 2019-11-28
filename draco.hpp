/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the draco.hpp file. It contains the Draco class definition.
 *************************************************/
#include "space.hpp"

#ifndef DRACO_HPP
#define DRACO_HPP

/*************************************************
 Draco Class
 This class inherits from the Space class. It represents
 the character Draco Malfoy, who will be a "space" on the
 Hogwarts Express. It contains the functions to look around Draco,
 talk with Draco, and to cast a spell at Draco.
 *************************************************/
class Draco : public Space
{
private:
    
public:
    Draco();
    
    void look();
    void talk();
    void castSpell();
};

#endif /* DRACO_HPP */
