/*
Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2

*/
#include <iostream>

using namespace std;

int main()
{
    int num_1; int num_2; int res;
    cout << "El siguiente programa pide dos numeros enteros e imprime su residuo de ambos.\nIngrese el primer numero:" << endl;
    cin >> num_1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> num_2;
    res = num_1 % num_2;
    cout << "El residuo de la division " << num_1 << "/" << num_2 << " es: " << res << endl;
    return 0;
}
