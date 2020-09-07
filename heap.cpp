#include "heap.h"
#include <iostream>

HeapCell::HeapCell()
{
    id = -1;
    next = nullptr;
}

Heap::Heap() 
{
    top = nullptr;
    size = 0;
}

//Heap::~Heap() {}

bool Heap::empty()
{
   return (size==0);
}

void Heap::insert(int number)
{
    HeapCell *newCell; 
    newCell =  new HeapCell();
    newCell->id = number;
    newCell->next = top;
    top = newCell;
    size++;
}

int Heap::remove()
{
    if(size == 0) throw "Lista vazia!";
    int aux = top->id;
    HeapCell *auxCell;
    auxCell = top;
    top = top->next;
    delete auxCell;
    size--;
    return aux;
}

void Heap::clear()
{
    if(size == 0) throw "Lista vazia!";
    while(!empty())
        remove();
    std::cout << "A lista foi esvaziada!" <<std::endl;
}

void Heap::print()
{
    if(size == 0) throw "Lista vazia!";
    HeapCell *cell;
    cell = top;
    while(cell!=nullptr)
    {
        std::cout<< cell->id <<std::endl;
        cell = cell->next;
    }
}