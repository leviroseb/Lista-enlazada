#include <iostream>
#include<stdlib.h>
using namespace std;

template<typename T>

class Nodo{
    public:
        T dato;
        Nodo<T> *next;
        Nodo();
        Nodo(T _dato);
        void setNodo(T _dato);
        T getNodo();
        void Print();

};



template<typename T>
Nodo<T>::Nodo(T _dato)
{
    dato=_dato;
    next=NULL;
}

template<typename T>
T Nodo<T>::getNodo()
{
    return dato;
}

template<typename T>
void Nodo<T>::setNodo(T _dato)
{
    dato=_dato;
}

template<typename T>
void Nodo<T>::Print()
{
    cout<<dato<<"->";
}
