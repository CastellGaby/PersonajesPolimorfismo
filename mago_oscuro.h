#ifndef MAGO_OSCURO_H
#define MAGO_OSCURO_H
#include "Personaje.h"

class Mago_Oscuro:public Personaje
{
    public:
        bool super_rayo_activado;
        Mago_Oscuro(int hp, int puntos_de_ataques);
        virtual ~Mago_Oscuro();

        void activarPoder();
        void atacar(Personaje*Personaje);
    protected:
    private:
};

#endif // MAGO_OSCURO_H
