#include <iostream>
#include <vector>
using namespace std;

#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"
#include "Guerrero.h"
#include "MagoBlanco.h"
#include "MagoOscuro.h"


int main()
{
    vector<Personaje*>personajes;


    personajes.push_back(new Curador(200,10,15));
    personajes.push_back(new Tanque(200,15));
    personajes.push_back(new Guerrero(200,20));
    personajes.push_back(new MagoBlanco(200,25));
    personajes.push_back(new MagoOscuro(200,30));

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }
    cout<<"---------Activar Poder---------"<<endl;

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->activarPoder();
    }

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }

    cout<<"---------Recibir ataque---------"<<endl;

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->recibirAtaque(10);
    }

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->imprimir();
    }

    return 0;
}
