/*
 Escriba un programa que pida dos números A y B e imprima en pantalla la división
 A/B con redondeo.
*/
#include <iostream>

using namespace std;

int main()
{
    float num_1; float num_2;
    cout << "El sigueinte programa realiza la division entera entre dos numeros.\nIngrese le primer numero: " << endl;
    cin >> num_1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num_2;
    float division = num_1 / num_2;
    int entero = (int) division;
    float parte_decimal = division - entero;

    if ( parte_decimal >= 0.5)
    {
       cout << num_1 << "/" << num_2 << " = " << (int)division + 1 << endl;
    }else{
         cout << num_1 << "/" << num_2 << " = " << (int)division << endl;
    }

    return 0;
}
