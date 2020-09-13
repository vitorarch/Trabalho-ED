#include "queue.h"
#include <iostream>

QueueCell::QueueCell()
{
    id = -1;
    next = nullptr;
}

Queue::Queue()
{
    head = new QueueCell();
    last = head;
    size = 0;
}

Queue::~Queue() 
{
    clear();
    delete head;
    delete last;
}

bool Queue::empty()
{
   return (size==0);
}

void Queue::insert(int number)
{

    QueueCell *newCell;
    newCell = new QueueCell;
    newCell->id = number;
    last->next = newCell;
    last = newCell;
    size++;
}

int Queue::remove()
{
    if(size == 0) throw "Lista vazia!";
    QueueCell *auxCell;
    int aux = head->next->id;
    auxCell = new QueueCell();
    auxCell = head;
    head = head->next; 
    delete auxCell;
    size--;
    return aux;
}

void Queue::clear()
{
    while(!empty())
        remove();
    std::cout << "A fila foi esvaziada!" <<std::endl;
}

void Queue::print()
{
    QueueCell *cell;
    cell = head->next;
    while(cell!=nullptr)
    {
        std::cout<< cell->id <<std::endl;
        cell = cell->next;
    }
}