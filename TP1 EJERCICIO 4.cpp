/*Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión
y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación
y el porcentaje de no ocupación del mismo.  Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes,
el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
*/


#include<iostream>
using namespace std;

int main () {
 int a,p,po, pl;

 cout<< "Ingresar asientos disponibles: ";
 cin >> a;
 cout << "Ingresar pasajes vendidos: ";
 cin >> p;

 po = p *100 /a;

 pl= 100 - po;

 cout<< "El porcentaje de ocupacion es: " << po << "%";
 cout << endl;

 cout << " el porcentaje de desocupacion es: "<< pl<< "%";





return 0;
}
