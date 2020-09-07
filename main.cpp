#include "heap.h"
#include <iostream>
#include <cstdio>

int main()
{
    Heap teste = Heap();
    teste.insert(2);
    teste.insert(3);
    teste.insert(7);
    teste.insert(34);
    teste.insert(21);
    teste.print();
    teste.remove();
    teste.print();
    teste.empty();
    teste.clear();
    teste.empty();
    system("pause");
}