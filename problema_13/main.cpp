/*
 * Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,suma = 0;
    bool estado;
    cout << "Ingrese un numero: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        estado = true;
        if(i == 0 || i == 1 || i == 4){
            estado = false;
        }
        for (int x = 2; x < i / 2; x++){
            if(i % x == 0){
                estado = false;
            }
        }
        if(estado == true){
          suma += i;
        }
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}
