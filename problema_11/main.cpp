/*
 * Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
Nota: la salida del programa debe ser: El minimo comun multiplo es: 12.
*/
#include <iostream>
using namespace std;

int main()
{
    int n,mcm;
    bool key = true;
    cout << "Ingrese un numero: ";
    cin >> n;
    mcm = n;
    while(key == true){
        for(int i = n; i >= 1; i--){
            if(mcm % i != 0){
                key = true;
                break;
            }else{
                key = false;
            }
        }
        mcm++;
    }
    cout << "El minimo cmun multiplo es: " << mcm - 1 << endl;
    return 0;
}
