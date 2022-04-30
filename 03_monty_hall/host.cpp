// host.cpp
//
// Implementation file for host class for monty hal;;
// Completed by: Lachlan Smith


#include "host.h"
#include "game.h"


//--------------------------------------------------
void host::AskDoor()
{
    std::cout << "[Host] Choose a Door 0 - "<< NUM_DOORS - 1 << std::endl;
}

//--------------------------------------------------
void host::AskSwitch(int closedDoor)
{
    std::cout << "[Host] Would you like to switch to door "<< closedDoor << " ? (Y or N)"<< std::endl;
}

int host::DetermineWinner(int doorSelection, door** doorsList)
{
    if ( doorsList[doorSelection]->returnCar() )
    {
        std::cout << "[Host] Congratulations! You have picked the correct door (Door =  "<< doorSelection << " )"<< std::endl;
        return WINNER;
    }
    else
    {
        std::cout << "[Host] Better luck next time! You did not select the correct door" << std::endl;
        return LOSER;
    }
}

//--------------------------------------------------
int host::OpenDoor(int playerDoor, door** doorsList, int numDoors)
{

    int numDoorsToOpen = numDoors - 2;
    bool carNotSelectedByPlayer = false;
    int doorNotToOpen;

    std::vector<int> doorsToOpen(numDoors);
    std::iota(doorsToOpen.begin(), doorsToOpen.end(), 0);

    //remove player door from the list and keep shut
    doorsToOpen.erase(doorsToOpen.begin() + playerDoor);

    //Check if car in in remaing doors that are shut, if so keep that door shut
    for(auto it = std::begin(doorsToOpen); it != std::end(doorsToOpen); ++it) 
    {
        //std::cout << "Door: "<< *it << std::endl;
        //std::cout << doorsList[*it]->returnCar() << std::endl;
        if (doorsList[*it]->returnCar())
        {
             //std::cout << "Not opening door [HAS CAR]: "<< *it << std::endl;
             doorNotToOpen = *it;
             doorsToOpen.erase(it);
             carNotSelectedByPlayer = true;
             break;
        }
    }

    //std::cout << "Car Not Selected by player: "<< carNotSelectedByPlayer << std::endl;
    
    // If car is not in remaining doors select one door at random to keep shut
    if(!carNotSelectedByPlayer)
    {
        doorNotToOpen = rand() % doorsToOpen.size();
        //std::cout << "Not opening door: "<< doorNotToOpen << std::endl;
        doorsToOpen.erase(doorsToOpen.begin() + doorNotToOpen);
    }


    //Say which doors are to be opened
    for(auto it = std::begin(doorsToOpen); it != std::end(doorsToOpen); ++it) 
    {
        std::cout << "[Host] Door "<< doorsList[*it]->returnID() <<" should be opened!" << std::endl;
    }

    return doorNotToOpen;
}