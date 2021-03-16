/*
 Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "EL siguiente programa imprime por pantalla si un numero es par o impar.\nIngrese el numero: " << endl;
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "El numero " << num << " es par." << endl;
    } else
        {
            cout << "El numero " << num << " es impar." << endl;
        }
    return 0;
}
