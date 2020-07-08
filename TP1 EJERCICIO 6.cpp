/*Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatros semanas del mes.
 El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
  Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y  $ 400 se listara como recaudación promedio $ 2000
  y como porcentajes por semana: 20%, 15%, 60% y 5%
  */

  #include<iostream>
using namespace std;

int main () {
int semana1, semana2, semana3, semana4, total, p, ps1, ps2, ps3, ps4;

cout <<" Ingrese la recaudacion semana 1: ";
cin >> semana1;
cout <<" Ingrese la recaudacion semana 2: ";
cin >> semana2;
cout <<" Ingrese la recaudacion semana 3: ";
cin >> semana3;
cout <<" Ingrese la recaudacion semana 4: ";
cin >> semana4;

total = semana1 +semana2 + semana3 +semana4;

p= total /4;

ps1 = semana1 *100 / total;
ps2 = semana2 *100 / total;
ps3 = semana3 *100 / total;
ps4 = semana4 *100 / total;

cout <<" El promedio de reacudacion es: " << "$"<< p;
cout<< endl;
cout << "El promedio de recaudacion de la semana 1 es: " << ps1<< "%";
cout<< endl;
cout << "El promedio de recaudacion de la semana 2 es: " << ps2<< "%";
cout<< endl;
cout << "El promedio de recaudacion de la semana 3 es: " << ps3<< "%";
cout<< endl;
cout << "El promedio de recaudacion de la semana 4 es: " << ps4<< "%";










return 0;
}
