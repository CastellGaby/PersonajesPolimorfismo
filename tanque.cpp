#include "tanque.h"

Tanque::Tanque()
{
    this->tipo="Tanque";
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->escudo_activado=false;
    //ctor
}

Tanque::~Tanque()
{
    //dtor
}


void Tanque::activarPoder()
{
    this->escudo_activado=true;
    //dtor
}

void Tanque::recibirAtaque(int ataque)
{
    if(escudo_activado)
    this->hp-=ataque/2;
    else
        this->hp-=ataque;
    escudo_activado=false;
    //dtor
}
