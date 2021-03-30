/*
 Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    for(int i = 1; i <= 10; i++){
        cout << i << " X " << n << " = " << i * n << endl;
    }
    return 0;
}
