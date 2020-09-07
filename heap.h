#ifndef HEAP_H
#define HEAP_H


// Criado o tipo HeapCell que armazenará um valor e uma referência a próxima celula da pilha encadeada 
class HeapCell
{
    private:
        int id;
        HeapCell *next;

    public:
        HeapCell();
    
    friend class Heap;
};

// Classe da pilha com métodos necessários de acorodo com a esecificação do trabalho
class Heap
{
    private:
        HeapCell* top;
        int size;
        
    public:
        Heap();
        //~Heap();
        virtual bool empty();
        virtual void insert(int number);
        virtual int remove();
        virtual void print();
        virtual void clear();
    

};

#endif // HEAP_H

