#include<iostream>
#include<string>
#include<stdlib.h>
#include "nodo.h"
#include"iterador.cpp"
using namespace std;

template<typename T>

class Lista{
    Nodo<T> *head;
    int num_nodos;
    public:
        Lista();
        void add_head(T);
        void add_tail(T);
        void Print();
        Iterador buscar(T);

};

template<typename T>
Lista<T>::Lista()
{
    head=NULL;
}


template<typename T>
void Lista<T>::add_head(T _dato)
{
    Nodo<T> *new_node= new Nodo<T> (_dato);
    if(!head)
    {
        head=new_node;
    }else{
        new_node->next=head;
        head=new_node;
    }
}

template<typename T>
void Lista<T>::add_tail(T _dato)
{
    Nodo<T> *new_node=new Nodo<T> (_dato);
    Nodo<T> *temp=head;

    if(!head)
    {
        head=new_node;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

}

template<typename T>
void Lista<T>::Print(){
    Nodo<T> *temp = head;
    if(!head){
        cout<<"La lista est� vac�a"<<endl;
    }else{
        while(temp){
            cout<<temp->dato<<"->";
            if(!temp->next) cout<<"NULL";
                temp=temp->next;
        }
    }
    cout<<endl<<endl;
}

template<typename T>
Iterador Lista::buscar(T n)
{
    Nodo* p=head;
    Iterador it;
    if(p->dato==n)
    {
        it=Nodo;
        return it;
    }
    else
    {
        it++;
    }
    
}


