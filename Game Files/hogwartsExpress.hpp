/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the hogwartsExpress.hpp file. It contains the HogwartsExpress class definition.
 *************************************************/
#include "player.hpp"
#include "space.hpp"
#include "ron.hpp"
#include "caboose.hpp"
#include "trolleycar.hpp"
#include "slytherincar.hpp"
#include "draco.hpp"
#include "enginecar.hpp"
#include "storage.hpp"

#ifndef HOGWARTSEXPRESS_HPP
#define HOGWARTSEXPRESS_HPP

/*************************************************
 HogwartsExpress Class
 This class represents the train the Hogwarts Express.
 It contains a constructor that is used to create all of the spaces
 on the train, a getter function, and contains private member variables
 for each of the spaces on the Hogwarts Express. The constructor
 dynamically allocates memory for the spaces, and the destructor deallocates it.
 *************************************************/
class HogwartsExpress
{
private:
    Caboose *caboose;
    Ron *ron;
    TrolleyCar *trolleyCar;
    SlytherinCar *slytherinCar;
    Draco *draco;
    EngineCar *engineCar;
    Storage *storage;
    
    Player* harryPotter;
    
public:
    HogwartsExpress();
    ~HogwartsExpress();
    
    Player* getPlayer();
    
};
#endif /* HOGWARTSEXPRESS_HPP */
