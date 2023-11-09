#ifndef VOTACIONES_H
#define VOTACIONES_H

#include <iostream>
#include <stdlib.h>
#include<iomanip>
#include <unistd.h>

using namespace std;

class Votaciones
{
    public:
        Votaciones();

        virtual ~Votaciones();

        void mostrarVotos();

        void pedirVotos();
        void reiniciarVotos();
        void determinarGanador();
        void iniciarVotaciones();
        void comprobarSegundaVuelta();

        int registroCandidatos();

    protected:

    private:
     string votaciones[8][100] = { " " };
     int cantidadCandidatos;
     int votosGanador =0;
     int votos[100] = {0};
     int posicionSegundaVuelta1 = 0;
     int posicionSegundaVuelta2 = 0 ;
     int ganador =0;
     int votosTotales=0;
     bool haySegundaVuelta = false;

};

#endif // VOTACIONES_H
