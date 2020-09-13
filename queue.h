#ifndef QUEUE_H
#define QUEUE_H


// Criado o tipo HeapCell que armazenará um valor e uma referência a próxima celula da pilha encadeada 
class QueueCell
{
    private:
        int id;
        QueueCell *next;

    public:
        QueueCell();
    
    friend class Queue;
};

// Classe da pilha com métodos necessários de acorodo com a esecificação do trabalho
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

#endif // HEAP_H

