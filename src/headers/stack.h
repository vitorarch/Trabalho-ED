#ifndef STACK_H
#define STACK_H

#include <iostream>

// CCreaetd the StackCell type, wich stores a value and a point to next queue cell
class stackCell
{
    private:
        int id;
        stackCell *next;

    public:
        stackCell();
    
    template<typename T> friend class Stack;
};

// Class Stack implemented using pointers and template
template <typename T> 
class Stack
{
    private:
        stackCell* top;
        int size;
        
    public:
        Stack();
        ~Stack();
        bool empty();
        void insert(int id);
        int remove();
        void print();
        void clear();
};


template<typename T> Stack<T>::Stack()
{
    top = nullptr;
    size = 0;
}

template<typename T> Stack<T>::~Stack()
{
    clear();
    delete top;
}

template<typename T> void Stack<T>::insert(int id)
{
    stackCell *newCell; 
    newCell =  new stackCell();
    newCell->id = id;
    newCell->next = top;
    top = newCell;
    size++;
}

template<typename T> void Stack<T>::clear()
{
    while(!empty())
        remove();
}

template<typename T> int Stack<T>::remove()
{
    if(size == 0) throw "Pilha vazia!";
    int aux = top->id;
    stackCell *auxCell;
    auxCell = top;
    top = top->next;
    delete auxCell;
    size--;
    return aux;
}

template<typename T> bool Stack<T>::empty()
{
    return (size==0);
}

template<typename T> void Stack<T>::print()
{
    stackCell *cell;
    cell = top;
    while(cell!=nullptr)
    {
        std::cout<< cell->id <<std::endl;
        cell = cell->next;
    }
}

#endif // STACK_H

