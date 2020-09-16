#ifndef BATTLE_H
#define BATTLE_H

#include "stack.h"
#include "queue.h"

// classe para representar as naves
class Spaceship
{
    private: 
        int id;

    public:
        Spaceship(int id);
        int getId();
};

//classe responsável pela execução das operações de acordo com a instrução recebida 
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