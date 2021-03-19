/*
Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
`5^3=125
*/
#include <iostream>

using namespace std;

int main()
{
    int num_1, num_2, a, b;
    b = 1;
    cout << "El siguiente programa imprime la potencia de dos numeros.\nIngrese el primer numero: " << endl;
    cin >> num_1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num_2;
    for(int i = 1; i < num_2; i++){
       if (i == 1){
           a = num_1 * num_1;
       }else{
            b = a * num_1;
            a = b;
       }
    }
    cout << num_1 << " ^ " << num_2 << " = " << b << endl;
    return 0;
}
