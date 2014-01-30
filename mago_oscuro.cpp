#include "mago_oscuro.h"

Mago_Oscuro::Mago_Oscuro(int hp,int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataques;
    this->tipo="MagoOscuro";
    this->super_rayo_activado=false;
    //ctor
}

Mago_Oscuro::~Mago_Oscuro()
{
    //dtor
}

void MagoOscuro::activarPoder()
{
    this->suer_rayo_activado=true;
}

void MagoOscuro::atacar(Personaje*objetivo)
{
    if(super_rayo_activado)
        objetivo->recibirAtaque(this->puntos_de_ataque*2);
    else
        objetivo->recibirAtaque(this->puntos_de_ataque);

    super_rayo_acivado=false;
}
