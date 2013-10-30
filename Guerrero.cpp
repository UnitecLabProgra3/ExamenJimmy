#include "Guerrero.h"

Guerrero::Guerrero(int hp, int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="Guerrero";
    //ctor
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;
}



void Guerrero::activarPoder()
{
    this->puntos_de_ataque=puntos_de_ataque/2;
    this->hp=hp*2;

}
