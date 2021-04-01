/*
 * Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1
1 + 22 + 22 + 33 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,suma = 0,numero;
    cout << "Ingrese un numero entero: " << endl;
    cin >> n;
    while(n>0){
        numero = 1;
        for(int i = 1; i <= n%10; i++){
            numero = numero * (n%10);
        }
        n = n / 10;
        suma += numero;
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}
