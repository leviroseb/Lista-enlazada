#include<iostream>
#include<stdlib.h>
#include "lista.cpp"
using namespace std;

int main()
{
    Lista<int> lista1;
    Lista<char> lista2;
    int n;
    char c;

    while(c!='0')
    {
        cout<<"Agregar elemento: "<<endl;
        cin>>c;
        lista2.add_tail(c);
        lista2.Print();
    }



    return 0;


}
