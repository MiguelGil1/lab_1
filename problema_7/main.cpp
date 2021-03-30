/*
En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
*/
#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1, r = 0, suma = 0;
    cout << "Ingrese un numero entero:";
    cin >> n;
   while(r <= n){
        r = a + b;
        b = a;
        a = r;
        if (r > n){
            break;
        }
        if (r%2 == 0){
            suma += r;
        }
    }
    cout <<"El resultado de la suma es: " << suma << endl;
    return 0;
}
