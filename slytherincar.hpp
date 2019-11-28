/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the slytherincar.hpp file. It contains the SlytherinCar class definition.
 *************************************************/
#include "space.hpp"

#ifndef SLYTHERINCAR_HPP
#define SLYTHERINCAR_HPP

/*************************************************
 SlytherinCar Class
 This class inherits from the Space class. It represents
 a Slytherin Car on the Hogwarts Express. It contains the functions
 to interact with the space (look, talk, and castSpell),
 as well as a default constructor.
 *************************************************/
class SlytherinCar : public Space
{
private:
    
public:
    SlytherinCar();
    
    void look();
    void talk();
    void castSpell();
};

#endif /* SLYTHERINCAR_HPP */
