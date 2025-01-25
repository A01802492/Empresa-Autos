#include <iostream>
#include "Automovil.h"
#include <string>

using namespace std;

Automovil::Automovil()
{
    marca = " ";
    modelo = " ";
    anio = 0;
    kilometraje = 0;
    numPuertas = 0;
    color = " ";
    numPasajeros = 0;
    rendimiento = 0;
    capacidadTanque = 0;
    gasolinaEnTanque = 0;
}

void Automovil::setMarca(string marca)
{
    cout << "Ingresa la marca del coche: ";
    cin >> marca;
}

string Automovil::getMarca()
{
    return marca;
}

void Automovil::setModelo(string modelo)
{
    cout << "Ingresa el modelo del coche: ";
    cin >> modelo;
}

string Automovil::getModelo()
{
    return modelo;
}

void Automovil::setAnio(int anio)
{
    cout << "Ingresa el año del coche: ";
    cin >> anio;
}

int Automovil::getAnio()
{
    return anio;
}

void Automovil::setKilometraje(int kilometraje)
{
    cout << "Ingresa el kilometraje del coche: ";
    cin >> kilometraje;
}

int Automovil::getKilometraje()
{
    return kilometraje;
}

void Automovil::setNumPuertas(int numPuertas)
{
    cout << "Ingresa el número de puertas del coche: ";
    cin >> numPuertas;
}

int Automovil::getNumPuertas()
{
    return numPuertas;
}

void Automovil::setColor(string color)
{
    cout << "Ingresa el color del coche: ";
    cin >> color;
}

string Automovil::getColor()
{
    return color;
}

void Automovil::setNumPasajeros(int numPasajeros)
{
    cout << "Ingresa el número de pasajeros del coche: ";
    cin >> numPasajeros;
}

int Automovil::getNumPasajeros()
{
    return numPasajeros;
}

void Automovil::setRendimiento(float rendimiento)
{
    cout << "Ingresa el rendimiento del coche: ";
    cin >> rendimiento;
}

float Automovil::getRendimiento()
{
    return rendimiento;
}

void Automovil::setCapacidadTanque(float capacidadTanque)
{
    cout << "Ingresa la capacidad del tanque del coche: ";
    cin >> capacidadTanque;
}

float Automovil::getCapacidadTanque()
{
    return capacidadTanque;
}

void Automovil::setGasolinaEnTanque(float gasolinaEnTanque)
{
    cout << "Ingresa la gasolina en el tanque del coche: ";
    cin >> gasolinaEnTanque;
}

float Automovil::getGasolinaEnTanque()
{
    return gasolinaEnTanque;
}

void Automovil::avanzaAutomovil(float distancia, int velocidad)
{

}

float Automovil::calculaConsumo(float distancia, int velocidad)
{

}

void Automovil::llenaTanque()
{

}

void Automovil::imprimeAutomovil()
{

}

bool Automovil::requiereMantenimiento()
{

}

bool Automovil::validaGasolinaEnTanque()
{

}

Automovil::~Automovil()
{
    
}