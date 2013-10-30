#include "MagoOscuro.h"

MagoOscuro::MagoOscuro(int hp, int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="MagoOscuro";
    this->super_rayo_activado=false;
    //ctor
}

MagoOscuro::~MagoOscuro()
{
    //dtor
}

void MagoOscuro::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"Super Rayo activado: "<<super_rayo_activado<<endl;
}

void MagoOscuro::activarPoder()
{
  this->super_rayo_activado=true;
}


void MagoOscuro::atacar(Personaje *objetivo)
{
    if(super_rayo_activado)
        objetivo->recibirAtaque(this->puntos_de_ataque*2);
    else
        objetivo->recibirAtaque(this->puntos_de_ataque/2);
}
