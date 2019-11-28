/*************************************************
 Author: Logan Jensen
 Assignment: Final Project
 Date: 11 JUN 2019
 Description: This is the draco.cpp file. It contains the member functions for the Draco class.
 *************************************************/
#include "draco.hpp"
#include "menu.hpp"
#include "player.hpp"

/*************************************************
 Draco Constructor
 This default constructor takes no parameters and sets
 no private member variables.
 *************************************************/
Draco::Draco() : Space()
{
    
}


/*************************************************
 look
 This function takes no parameters and returns no values.
 It outputs a message about the environment of draco
 if the player chooses to look around draco.
 *************************************************/
void Draco::look()
{
    std::cout << "You see Draco Malfoy sitting down." << std::endl;
    std::cout << "He looks disgruntled." << std::endl;
    std::cout << "The death eater's charm must have taken a toll on him." << std::endl;
    std::cout << "Surprisingly, he's not asleep, though." << std::endl;
    std::cout << "Did he know about the attack beforehand?" << std::endl;
}


/*************************************************
 talk
 This function takes no parameters and returns no values. This function
 represents a conversation with Draco Malfoy. It requires user input to answer
 the questions and to respond to Draco.
 *************************************************/
void Draco::talk()
{
    int menuChoice;
    
    std::cout << "Draco: \"Ugh...Potter.\"" << std::endl;
    std::cout << " \"What do you want?\"" << std::endl;
    std::cout << std::endl;
    std::cout << "Choose what you would like to say." << std::endl;
    std::cout << "1. \"Do you know how to stop the train?\"" << std::endl;
    std::cout << "2. \"Did you know this attack was going to happen?\"" << std::endl;
    //Get integer from user
    menuChoice = getInteger();
    
    //Validate input
    while (menuChoice < 1 || menuChoice > 2)
    {
        std::cout << "Only options are 1 or 2." << std::endl;
        menuChoice = getInteger();
    }
    
    //If choice was 1, then ask how to stop the train
    if (menuChoice == 1)
    {
        int answerChoice;
        
        std::cout << "Draco: \"I don't want to help you, Potter.\"" << std::endl;
        std::cout << "\"However, if you answer this correctly, I will help you.\"" << std::endl;
        std::cout << "\"Who is the greatest wizard who ever lived?\"" << std::endl;
        std::cout << std::endl;
        std::cout << "Choose what you would like to say." << std::endl;
        std::cout << "1. \"Voldemort\"" << std::endl;
        std::cout << "2. \"Severus Snape\"" << std::endl;
        std::cout << "3. \"Harry Potter\"" << std::endl;
        //Get integer from user
        answerChoice = getInteger();
        
        //Validate input
        while (answerChoice < 1 || answerChoice > 3)
        {
            std::cout << "Only options are 1-3." << std::endl;
            answerChoice = getInteger();
        }
        
        //Wrong choice
        if (answerChoice == 1)
        {
            std::cout << "Draco: \"Wrong. Absolutely wrong.\"" << std::endl;
            std::cout << "\"I cannot help someone who thinks that Voldemort is\"" << std::endl;
            std::cout << "\"the greatest wizard who ever lived. Leave me.\"" << std::endl;
        }
        //Correct choice
        else if (answerChoice == 2)
        {
            std::cout << "Draco: \"For once, Potter, you are correct.\"" << std::endl;
            std::cout << "\"Here, take this key to Storage.\"" << std::endl;
            std::cout << "\"There should be a spellbook in my luggage.\"" << std::endl;
            std::cout << "\"Perhaps that could help you...\"" << std::endl;
            
            //Give item to player
            this->player->addItem("Storage Key");
            this->player->setStorageKey(true);
        }
        else if (answerChoice == 3)
        {
            std::cout << "Draco: \"Don't make me laugh, Potter.\"" << std::endl;
            std::cout << "\"You're an absolute joke. Get away from me!\"" << std::endl;
        }
    }
    //Otherwise if menu choice was 2, draco apparently didn't know attack was going to happen
    else if (menuChoice == 2)
    {
        std::cout << "Draco: \"I...uh...had nothing to do with this, Potter!\"" << std::endl;
        std::cout << "\"Get away from me, and stop asking questions!\"" << std::endl;
    }

}


/*************************************************
 castSpell
 This function takes no parameters and returns no values.
 It outputs a message about the environment of draco
 if the player chooses to try to cast a spell at draco.
 *************************************************/
void Draco::castSpell()
{
    std::cout << "Harry waves his wand in the air." << std::endl;
    std::cout << "Draco: \"Don't try anything, Potter.\"" << std::endl;
    std::cout << "Draco takes out his want and pointers it at Harry." << std::endl;
    std::cout << "Harry decides he should not cast a spell at Draco." << std::endl;
}
