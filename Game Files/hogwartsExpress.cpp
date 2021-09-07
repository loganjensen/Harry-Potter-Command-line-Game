/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the hogwartsExpress.cpp file. It contains the HogwartsExpress class member functions.
 *************************************************/
#include "hogwartsExpress.hpp"


/*************************************************
 HogwartsExpress Constructor
 This constructor allocates memory for all of the spaces
 required on the Hogwarts Express. It also creates a new player
 object, which is then initialized to start in the caboose. Finally,
 the spaces are linked together to create a map used in the gameplay
 of Hogwarts Express.
 *************************************************/
HogwartsExpress::HogwartsExpress()
{
    //Create new spaces on hogwarts express
    caboose = new Caboose;
    ron = new Ron;
    trolleyCar = new TrolleyCar;
    slytherinCar = new SlytherinCar;
    draco = new Draco;
    engineCar = new EngineCar;
    storage = new Storage;
    
    //Create a new character and set starting location
    harryPotter = new Player();
    harryPotter->setCurrentSpace(caboose);
    
    //Connect the spaces together to create a "map" of a train
    caboose->setSpace(trolleyCar, storage, ron, nullptr, harryPotter, "in the Caboose.");
    ron->setSpace(nullptr, caboose, nullptr, nullptr, harryPotter, "with Ron.");
    trolleyCar->setSpace(slytherinCar, nullptr, nullptr, caboose, harryPotter, "in the Trolley Car.");
    slytherinCar->setSpace(engineCar, draco, nullptr, trolleyCar, harryPotter, "in the Slytherin Car.");
    draco->setSpace(nullptr, nullptr, slytherinCar, nullptr, harryPotter, "with Draco.");
    engineCar->setSpace(nullptr, nullptr, nullptr, slytherinCar, harryPotter, "in the Engine Car.");
    storage->setSpace(nullptr, nullptr, caboose, nullptr, harryPotter, "in the Storage.");
}


/*************************************************
 HogwartsExpress Destructor
 This destructor deallocates the memory created in the
 construction of a HogwartsExpress object.
 *************************************************/
HogwartsExpress::~HogwartsExpress()
{
    delete caboose;
    delete ron;
    delete trolleyCar;
    delete slytherinCar;
    delete draco;
    delete engineCar;
    delete storage;
    delete harryPotter;
}

/*************************************************
 Getter Functions
 *************************************************/
Player* HogwartsExpress::getPlayer()
{
    return harryPotter;
}
