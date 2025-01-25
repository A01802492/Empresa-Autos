#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <iostream>
#include <string>
using namespace std;

class Automovil {
    private:
        string marca;
        string modelo;
        int anio;
        int kilometraje;
        int numPuertas;
        string color;
        int numPasajeros;
        float rendimiento;
        float capacidadTanque;
        float gasolinaEnTanque;

    public:
        Automovil();
        string getMarca();
        string getModelo();
        int getAnio();
        int getKilometraje();
        int getNumPuertas();
        string getColor();
        int getNumPasajeros();
        float getRendimiento();
        float getCapacidadTanque();
        float getGasolinaEnTanque();

        void setMarca(string marca);
        void setModelo(string modelo);
        void setAnio(int anio);
        void setKilometraje(int kilometraje);
        void setNumPuertas(int numPuertas);
        void setColor(string color);
        void setNumPasajeros(int numPasajeros);
        void setRendimiento(float rendimiento);
        void setCapacidadTanque(float capacidadTanque);
        void setGasolinaEnTanque(float gasolinaEnTanque);

        void avanzaAutomovil(float distancia, int velocidad);
        float calculaConsumo(float distancia, int velocidad);
        void llenaTanque();
        void imprimeAutomovil();
        bool requiereMantenimiento();
        bool validaGasolinaEnTanque();
        virtual ~Automovil();

};

#endif