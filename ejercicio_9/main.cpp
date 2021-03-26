/*
    Escriba un programa que pida un número N e imprima el perímetro y área de un
    círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
    Ej: si se ingresa 1 se debe imprimir:
    Perimetro: 6.28352
    Area: 3.1416
*/
#include <iostream>

using namespace std;

int main()
{
    int r;
    float a,p;
    cout << "Ingrse el radio de un circulo: " << endl;
    cin >> r;
    p = 2* 3.1416 * r;
    a = 3.1416 * r * r;
    cout << "Perimetro: " << p << "\nArea: " << a << endl;
    return 0;
}
