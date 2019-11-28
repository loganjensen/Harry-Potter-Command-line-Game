/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the space.hpp file. It contains the Space class definition.
 *************************************************/
#include <iostream>

#ifndef SPACE_HPP
#define SPACE_HPP
class Player;

/*************************************************
 Space Class
 This abstract class represents a Space on a map with having pointers for Spaces
 to the right, top, left, and bottom of the Space. It also contains functionality
 for having a Space require a key, having a Player in the space, and contains 3
 pure virtual functions used for interacting with inherited Spaces.
 *************************************************/
class Space
{
protected:
    Space* top;
    Space* right;
    Space* left;
    Space* bottom;
    
    std::string name;
    
    bool needsKey;
    
    Player *player;
    
public:
    Space();
    Space(Space*, Space*, Space*, Space*);

    ~Space();
    
    Space* getTop();
    Space* getRight();
    Space* getLeft();
    Space* getBottom();
    bool getNeedsKey();
    std::string getName();
    
    void setSpace(Space*, Space*, Space*, Space*, Player*, std::string);
    void setNeedsKey(bool);
    
    virtual void look() = 0;
    virtual void talk() = 0;
    virtual void castSpell() = 0;
};

#endif /* SPACE_HPP */
