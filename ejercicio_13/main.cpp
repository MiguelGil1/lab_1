/*
  Escriba un programa que pida un número N e imprima todos los divisores de N.
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    cout << "Los divisores de " << n << " son:\n" << n << endl;
    for(int i = n/2; i >= 0; i--){
        if(n%i == 0){
            cout << i << endl;
        }
    }
    return 0;
}
