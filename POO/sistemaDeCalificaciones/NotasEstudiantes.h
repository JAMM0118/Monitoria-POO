#ifndef NOTASESTUDIANTES_H
#define NOTASESTUDIANTES_H
#include<iostream>

using namespace std;

class NotasEstudiantes
{
    public:
        NotasEstudiantes();
        virtual ~NotasEstudiantes();

        void menu();
        void pedirCantidadEstudiantes();
        void pedirNotasEstudiantes();
        void calcularNotaMasAlta_NotaMasBaja();
        void calcularPromedio();
        void buscarNotaEstudiante();

        bool validarOpcion(string opcion);

    protected:

    private:
        float notasEstudiantes[100];
        int cantidadEstudiantes;
        string opcion;
        float promedio;
        float nota_mas_baja =99999;
        float nota_mas_alta = 0;
        int idEstudiante;
        bool bandera = false;

};

#endif // NOTASESTUDIANTES_H
