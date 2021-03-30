/*
 * Escriba un programa que pida constantemente números hasta que se ingrese
 * el número cero e imprima en pantalla la suma de todos los números ingresados.
*/
#include <iostream>

using namespace std;

int main()
{
    float num;
    int suma = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num != 0){
        suma += num;
        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "La suma de los numeros ingresados es: " << suma << endl;
    return 0;
}
