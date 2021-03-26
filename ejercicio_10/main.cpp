/*
    Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.
    Ej: si se ingresa 33 se debe imprimir:
    Multiplos de 33 menores que 100:
    33
    66
    99
*/
#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cout << "Ingrese un numero para calcular sus multiplos entre el 1 y el 100: " << endl;
    cin >> n;
    cout << "Multiplos de " << n << " mernores que 100:" << endl;
    while(n * i <= 100){
        cout << n*i << endl;
        i++;
    }
    return 0;
}
