#include "Personaje.h"
#include <string>
#include <iostream>


Personaje::Personaje(int hp,int puntos_de_ataque, string tipo)
{
   this->hp=hp;
   this->puntos_de_ataque=puntos_de_ataque;
   this->tipo=tipo;
    //ctor
}

Personaje::Personaje()
{

    //ctor
}

Personaje::~Personaje()
{
    //dtor
}



void Personaje::recibirAtaque(int ataque)
{
  hp-=ataque;
}

void Personaje::atacar(Personaje *objetivo)
{
   objetivo->recibirAtaque(this->puntos_de_ataque);
}

