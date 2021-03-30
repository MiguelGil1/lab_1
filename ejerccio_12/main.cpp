/*
 Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N^5
*/
#include <iostream>

using namespace std;

int main()
{
    int n, potencia = 1;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    for (int i = 1; i <= 5; i++){
        potencia = potencia * n;
        cout << n << " ^ " << i << " = " << potencia << endl;
    }
    return 0;
}
