/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the enginecar.cpp file. It contains the EnginerCar class definition.
 *************************************************/
#include "space.hpp"

#ifndef ENGINERCAR_HPP
#define ENGINERCAR_HPP


/*************************************************
 EngineCar Class
 This class inherits from the Space class. It represents
 a the Engine Room on the hogwarts express. The player needs
 to have the Spellbook in order to change the boolean isRunning
 to false and win the game. It also contains functions to look around and
 talk in the EngineCar.
 *************************************************/
class EngineCar : public Space
{
private:
    bool isRunning;
    
public:
    EngineCar();
    
    void look();
    void talk();
    void castSpell();
};

#endif /* ENGINERCAR_HPP */
