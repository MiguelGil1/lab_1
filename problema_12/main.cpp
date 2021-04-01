/*
Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,mayor = 0;
    bool estado;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    for(int i = 0; i <= int(n/2); i++){
        estado = true;
        if(i == 0 || i == 1 || i == 4){
            estado = false;
        }
        for(int x = 2; x < i/2; x++){
            if(i % x == 0){
                estado = false;
            }
        }
        if(estado == true and i > mayor and n % i == 0){
            mayor = i;
        }
    }
    cout << "El mayor factor primo de " << n << " es: " << mayor << endl;
    return 0;
}
