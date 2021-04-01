/*
 * Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,contador = 0;
    bool estado;
    cout << "Ingrese un numero entero para imprimir ese numero primo: ";
    cin >> n;
    int i = 0;
    while(contador != n){
        estado = true;
        if(i == 0 || i == 1 || i == 4){
            estado = false;
        }
        for(int x = 2; x < i/2; x++){
            if(i % x == 0){
                estado = false;
            }
        }
        if(estado == true){
            contador++;
        }
        i++;
    }
    cout << "El primo numero " << n << " es: " << i-1 << endl;
}
