/* Hacer un programa para ingresar por teclado una cantidad de cantidad de minutos y mostrar por pantalla
a cuantos días,  horas y minutos equivalen.
 Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día,  1 hora y 20 minutos.
 Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día,  6 horas y 0 minutos.
 */

#include <iostream>
using namespace std;

int main () {
int minutos, horas, dias, resto;

cout << " Ingrese la cantidad de minutos: ";
cin >> minutos;

dias = minutos / 1440;
resto = minutos % 1440;
horas = resto / 60;
minutos = resto % 60;


cout << "Equivalen a: " << dias << "  dia " << horas << "  horas " << minutos << "  minutos";






return 0;
}
