/*
Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120
*/
#include <iostream>

using namespace std;

int main()
{
    int num, suma = 1;
    cout << "Ingrese un numero entero para calcular su factorial: " << endl;
    cin >> num;
    for (int i = num; i >= 1; i--){
        suma = suma * i;
    }
    cout << num << "! = " << suma << endl;
    return 0;
}
