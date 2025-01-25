#include "Automovil.h"
#include <iostream>
using namespace std;

int main()
{
 cout<<"\nSistema de control de uso de autos\n";
 Automovil miCoche;
 miCoche.imprimeAutomovil();
 cout<<"\nQue distancia quieres recorrer?: ";
 float distancia;
 cin>>distancia;
 cout<<"Cuantos pasajeros viajaran?: ";
 float pasajeros;
 cin>>pasajeros;
 miCoche.avanzaAutoAutomovil(distancia,pasajeros);
 miCoche.imprimeAutomovil();
 miCoche.llenaTanque();
 miCoche.imprimeAutomovil();
 return 0;
}