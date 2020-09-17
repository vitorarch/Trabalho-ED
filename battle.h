#ifndef BATTLE_H
#define BATTLE_H

#include "stack.h"
#include "queue.h"

// class to represent the ships
class Spaceship
{
    private: 
        int id;

    public:
        Spaceship(int id);
        int getId();
};

//class responsable to control the inputs and execute respective function 
class Battle
{
    private:
        int shipArmy = 0;
        Stack<Spaceship> readyShips;
        Stack<Spaceship> battle;
        Queue<Spaceship> repair;

    public:
        Battle(int ships);
        void preparingForBattle(Spaceship ship);
        int damageShips(Spaceship ship);
        int sendForBattle();
        int repairedShip();
        void readyForBattle();
        void inRepair();
};

#endif // BATTLE_H