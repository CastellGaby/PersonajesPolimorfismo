#ifndef CURADOR_H
#define CURADOR_H
#include "Personaje.c"

class Curador:public Personaje
{
    public:
        Curador(int h, int puntos_de_ataque, int puntos_de_curacion);
        virtual ~Curador();
    protected:
    private:
};

#endif // CURADOR_H
