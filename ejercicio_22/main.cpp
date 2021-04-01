/*
Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37
*/
#include <iostream>

using namespace std;

int main()
{
    int n, horas, minutos;
    float s_a_h;
    cout << "Ingrese una cantidad de segundos: ";
    cin >> n;
    s_a_h = n/3600;
    horas = int(s_a_h);
    n = n - (horas * 3600);
    minutos = int(n/60);
    n = n - (minutos * 60);
    cout << horas << ":" << minutos << ":" << n << endl;
    return 0;
}
