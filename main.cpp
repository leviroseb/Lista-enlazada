#include<iostream>
#include<stdlib.h>
#include "lista.cpp"
using namespace std;

int main()
{
    Lista<int> lista1;
    int n;

    cout<<"Agregar elemento: "<<endl;
    cin>>n;
    lista1.add_head(n);
    lista1.Print();

    cout<<"Agregar elemento: "<<endl;
    cin>>n;
    lista1.add_head(n);
    lista1.Print();

    cout<<"Agregar elemento: "<<endl;
    cin>>n;
    lista1.add_head(n);
    lista1.Print();

    return 0;


}
