#include <iostream>
#include "PresupuestoViaticos.h"
#include "PresupuestoViaticos.cpp"

using namespace std;

int main()
{
    PresupuestoViaticos presupuesto;
    string matriz[5][5];

    presupuesto.pedirDistancias();
    cout<<"\n\n";

    presupuesto.mostrarPrecioViaticos();
    cout<<"\n\n";




    presupuesto.setCostos(200000,400000,800000, matriz);
    cout<<presupuesto.getCostos1();
    cout<<presupuesto.getCostos2();
    cout<<presupuesto.getCostos3();
    return 0;
}
