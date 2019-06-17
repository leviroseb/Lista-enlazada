#include<iostream>
#include<stdlib.h>
#include"lista.cpp"
using namespace std;

template<typename T>
class Iterador
{
    private:
        Nodo<T> *iter;
    public:
        void operator=(Nodo<T> * );
        void operator++();
        T operator*();
};

template<typename T>
void Iterador::operator=(Nodo<T> _ptr)
{
    iter=_ptr;
}

template<typename T>
void Iterador::operator++()
{
    iter=iter->next;
}

template<typename T>
T Iterador::operator*()
{
    return iter->dato;
}





