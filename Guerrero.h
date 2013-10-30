#ifndef GUERRERO_H
#define GUERRERO_H
#include "Personaje.h"

class Guerrero : public Personaje
{
    public:
        Guerrero(int hp, int puntos_de_ataque);
        void activarPoder();
        void imprimir();
        virtual ~Guerrero();
    protected:
    private:
};

#endif // GUERRERO_H
