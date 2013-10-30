#include "MagoBlanco.h"

MagoBlanco::MagoBlanco(int hp, int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="MagoBlanco";
    //ctor
}

MagoBlanco::~MagoBlanco()
{
    //dtor
}

void MagoBlanco::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;
}


void MagoBlanco::activarPoder()
{
    this->puntos_de_ataque=puntos_de_ataque*2;
    this->hp=hp/2;

}
