#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

// Creaetd the QueueCell type, wich stores a value and a point to next queue cell
class QueueCell
{
    private:
        int id;
        QueueCell *next;

    public:
        QueueCell();
    
    template<typename T> friend class Queue;
};

// Class Queue implemented using pointers and template
template <typename T> 
class Queue
{
    private:
        QueueCell* head;
        QueueCell* last;
        int size;
        
    public:
        Queue();
        ~Queue();
        virtual bool empty();
        virtual void insert(int number);
        virtual int remove();
        virtual void print();
        virtual void clear();
};


template<typename T> Queue<T>::Queue()
{
    head = new QueueCell();
    last = head;
    size = 0;
}

template<typename T> Queue<T>::~Queue() 
{
    clear();
    delete head;
    delete last;
}

template<typename T> bool Queue<T>::empty()
{
   return (size==0);
}

template<typename T> void Queue<T>::insert(int number)
{
    QueueCell *newCell;
    newCell = new QueueCell;
    newCell->id = number;
    last->next = newCell;
    last = newCell;
    size++;
}

template<typename T> int Queue<T>::remove()
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

template<typename T> void Queue<T>::clear()
{
    while(!empty())
        remove();
    std::cout << "A fila foi esvaziada!" <<std::endl;
}

template<typename T> void Queue<T>::print()
{
    if(size == 0) throw "Fila vazia!";
    QueueCell *cell;
    cell = head->next;
    while(cell!=nullptr)
    {
        std::cout<< cell->id <<std::endl;
        cell = cell->next;
    }
}

#endif // HEAP_H

