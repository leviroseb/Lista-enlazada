#include<iostream>
#include<string>
#include<stdlib.h>
#include "nodo.h"
using namespace std;

template<typename T>

class Lista{
    Nodo<T> *head;
    int num_nodos;
    public:
        Lista();
        void add_head(T);
        void add_tail(T);
        void addSort(T);
        void Print();

};

template<typename T>
Lista<T>::Lista()
{
    head=NULL;
    num_nodos=0;
}


template<typename T>
void Lista<T>::add_head(T _dato)
{
    Nodo<T> *new_node= new Nodo<T> (_dato);
    Nodo<T> *temp= head;
    if(!head)
    {
        head=new_node;
    }else{
        new_node->next=head;
        head=new_node;
        while (temp){
            temp=temp->next;
        }
    }
    num_nodos++;
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

    num_nodos++;
}


//Insertar de frma ordenada
template<typename T>
void Lista<T>::addSort(T _dato)
{
    Nodo<T> *new_node=new Nodo<T> (_dato);
    Nodo<T> *temp=head;
    if(!head)
    {
        head=new_node;
    }
    else
    {
        if(head->dato>_dato)
        {
            new_node->next=head;
            head=new_node;
        }
        else
        {
            while((temp->next!=NULL)&&(temp->next->dato<_dato)){
            temp=temp->next;
            }
            new_node->next=temp->next;
            temp->next=new_node;
        }

    }
    num_nodos++;

}


template<typename T>
void Lista<T>::Print(){
    Nodo<T> *temp = head;
    if(!head){
        cout<<"La lista está vacía"<<endl;
    }else{
        while(temp){
            cout<<temp->dato<<"->";
            if(!temp->next) cout<<"NULL";
                temp=temp->next;
        }
    }
    cout<<endl<<endl;
}



