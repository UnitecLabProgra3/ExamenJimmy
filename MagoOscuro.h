#ifndef MAGOOSCURO_H
#define MAGOOSCURO_H
#include "Personaje.h"

class MagoOscuro : public Personaje
{
    public:
        bool super_rayo_activado;
        MagoOscuro(int hp, int puntos_de_ataque);
        void activarPoder();
        void imprimir();
        void atacar(Personaje *objetivo);
        virtual ~MagoOscuro();
    protected:
    private:
};

#endif // MAGOOSCURO_H
