#ifndef BATTLE_H
#define BATTLE_H

#include "stack.h"
#include "queue.h"

class Spaceship
{
    private: 
        int id;

    public:
        Spaceship();
        Spaceship(int id);
        int getId();
        friend class stackcell;
};

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


#endif // SPACESHIPS_H