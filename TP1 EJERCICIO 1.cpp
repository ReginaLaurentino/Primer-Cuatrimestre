/* Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
y  el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.
*/
#include<iostream>
using namespace std;

int main ( ) {
 int horas, valor, sueldo;

 cout << "Ingresar la cantidad de horas:  ";
 cin >>horas;
 cout << "Ingresar el valor:  ";
 cin >> valor;


 sueldo = horas * valor;

 cout << " El sueldo es $" << sueldo;














return 0;

}


