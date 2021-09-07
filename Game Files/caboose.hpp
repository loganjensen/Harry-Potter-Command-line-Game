/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the caboose.hpp file. It contains the Caboose Class definition.
 *************************************************/
#include "space.hpp"

#ifndef CABOOSE_HPP
#define CABOOSE_HPP

/*************************************************
 Caboose Class
 This class inherits from the Space class. It represents
 a Caboose on the hogwarts express. It does not contain much
 functionality, and the look, talk, and castSpell functions output
 messages about the environment.
 *************************************************/
class Caboose : public Space
{
private:
    
public:
    Caboose();
    
    void look();
    void talk();
    void castSpell();
};

#endif /* CABOOSE_HPP */
