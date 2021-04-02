/*
 * Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, mayor;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if(a > b){
        mayor = a;
    }else{
        mayor = b;
    }
    int n = mayor;
    while ((n % a != 0) || (n % b != 0)){
        n++;
    }
   \
    cout << "El MCM entre " << a << " y " << b << " es: " << n << endl;
    return 0;
}
