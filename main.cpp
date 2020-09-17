#include "battle.h"
#include <iostream>
#include <cstdio>

int main()
{
    int ships = 0;
    int shipId = 0;
    std::cin >> ships;
    Battle war = Battle(ships);
    for (int i=0; i<ships; i++)
    {
        std::cin>> shipId; 
        war.preparingForBattle(Spaceship(shipId));
    }

    int control;
    while(std::cin>>control)
    {
        switch(control)
        {   
            case 0:
                std::cout<<"nave " << war.sendForBattle() << " em combate" << std::endl;
                break;
            case -1:
                std::cout<<"nave " << war.repairedShip() << " consertada" << std::endl;
                break;
            case -2:
                war.readyForBattle();
                break;
            case -3:
                war.inRepair();
                break;
            default:
                war.damageShips(control);
                std::cout<<"nave " << control << " avariada" << std::endl;
        }
    }

    system("pause");
}