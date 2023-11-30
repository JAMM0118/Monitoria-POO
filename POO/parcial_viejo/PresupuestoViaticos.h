#ifndef PRESUPUESTOVIATICOS_H
#define PRESUPUESTOVIATICOS_H

#include <iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;


class PresupuestoViaticos
{
    public:
        PresupuestoViaticos();
        virtual ~PresupuestoViaticos();

        void mostrarDistancias();
        void mostrarPrecioViaticos();
        void mostrarCostoViaticos();
        void pedirDistancias();

        void setCostos(int costo1, int costo2, int costo3,string matriz[5][5]);


        void calcularCostoViaticos(string matriz[5][5]);

        int getCostos1();
        int getCostos2();
        int getCostos3();

    protected:

    private:
        string distancias[5][5];
        string matrizViaticos[4][2];
        int costos[3] = {};
        string arreglo[4] = {"Bogota", "Medellin", "Cali", "Barranquilla"};
        int costosTotales = 0;
        int costoBogota = 0;
        int costoMedellin = 0;
};

#endif
