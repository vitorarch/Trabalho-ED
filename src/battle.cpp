#include "battle.h"
#include "stack.h"
#include "queue.h"


Spaceship::Spaceship(int id) 
{
    this->id = id;
}

int Spaceship::getId() 
{
    return this->id;
}

Battle::Battle(int ships)
{
    shipArmy = ships;
}

void Battle::preparingForBattle(Spaceship ship)
{
    this->readyShips.insert(ship.getId());
}

int Battle::damageShips(Spaceship ship)
{
    this->battle.remove();
    this->repair.insert(ship.getId());
    return ship.getId();
}

int Battle::sendForBattle()
{
    int shipId = this->readyShips.remove();
    this->battle.insert(shipId);
    return shipId;
}

int Battle::repairedShip()
{
    int shipId = this->repair.remove();
    this->readyShips.insert(shipId);
    return shipId;
}

void Battle::readyForBattle()
{
    this->readyShips.print();
}

void Battle::inRepair()
{
    this->repair.print();
}