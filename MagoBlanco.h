#ifndef MAGOBLANCO_H
#define MAGOBLANCO_H
#include "Personaje.h"

class MagoBlanco : public Personaje
{
    public:
        MagoBlanco(int hp, int puntos_de_ataque);
        void activarPoder();
        void imprimir();
        virtual ~MagoBlanco();
    protected:
    private:
};

#endif // MAGOBLANCO_H
