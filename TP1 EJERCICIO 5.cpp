/* Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
y luego se  informe el porcentaje de ventas para cada una de ellas.
 Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará
 A: 50%, B: 12,50% y C: 37,50%.
 */


#include<iostream>
using namespace std;

int main () {
    float a, b, c, pa, pb, pc, pt;

    cout << "Ingresar la cantidad de alfajores vendidos de A: ";
    cin >> a;
    cout << "Ingresar la cantidad de alfajores vendidos de B: ";
    cin >> b;
    cout << "Ingresar la cantidad de alfajores vendidos de C: ";
    cin >> c;

    pt = a+b+c;
    pa= a*100/pt;
    pb= b*100/pt;
    pc= c*100/pt;

    cout<< "El promedio de ventas de A es: "<<pa<<"%";
    cout << endl;
    cout<< "El promedio de ventas de B es: "<<pb<<"%";
    cout << endl;
    cout<< "El promedio de ventas de C es: "<<pc<<"%";











return 0;
}
