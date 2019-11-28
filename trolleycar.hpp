/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the trolleycar.hpp file. It contains the TrolleyCar class definition.
 *************************************************/
#include "space.hpp"

#ifndef TROLLEYCAR_HPP
#define TROLLEYCAR_HPP

/*************************************************
 TrolleyCar Class
 This class inherits from the Space class. It contains a constructor,
 the look, talk and castSpell functions. This class represents a TrolleyCar
 on the Hogwarts Express. The TrolleyCar has sweet food and drink for the player
 of the game.
 *************************************************/
class TrolleyCar : public Space
{
private:
    
public:
    TrolleyCar();
    
    void look();
    void talk();
    void castSpell();
};

#endif /* TROLLEYCAR_HPP */
