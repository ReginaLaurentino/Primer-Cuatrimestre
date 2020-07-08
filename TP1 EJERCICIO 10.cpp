/* Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantas días y horas equivalen.
 Ejemplo 1: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y  2 horas.
 Ejemplo 2: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días  y  0 horas.
  Ejemplo 3: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días  y  20 horas.
  */




 #include <iostream>
using namespace std;


int main () {

int horas, dias;

cout <<" Ingrese la cantidad de horas: ";
cin >> horas;

dias = horas /24;
 horas= horas % 24;

 cout << " Equivalen a " << dias << " dias y " << horas << " horas";




return 0;
}
