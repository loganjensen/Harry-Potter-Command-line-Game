/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the storage.hpp file. It contains the Storage class definition.
 *************************************************/
#include "space.hpp"

#ifndef STORAGE_HPP
#define STORAGE_HPP

/*************************************************
 Storage Class
 This class inherits from the Space class. It represents
 a storage space on the Hogwarts Express. It contains a constructor,
 and the look, talk, and castSpell functions.
 *************************************************/
class Storage : public Space
{
private:
    
public:
    Storage();
    
    void look();
    void talk();
    void castSpell();
};

#endif /* STORAGE_HPP */
