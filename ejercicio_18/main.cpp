/*
 * Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int i = 0;
    int cube = 0;
    while(cube <= n){
        cube = i * i;
        if (cube == n){
            cout << n << " es un cuadrado perfecto." << endl;
            break;
        }else if (cube > n){
            cout << n << " NO es un cuadrado perfecto." << endl;
        }
        i++;
    }
    return 0;
}
