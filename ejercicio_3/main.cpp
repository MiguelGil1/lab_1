/*
 Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
*/
#include <iostream>

using namespace std;

int main()
{
    int num_1;int num_2;
    cout << "El siguiente programa pide dos numeros e imprime en pantalla el mayor de los dos.\nIngrese el primer numero: " << endl;
    cin >> num_1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num_2;
    if (num_1 > num_2)
    {
        cout << "El numero mayor es: " << num_1 << endl;
    }else if (num_1 < num_2){
       cout << "El numero mayor es: " << num_2 << endl;
    }else{
        cout << "Los dos numeros son iguales." << endl;
    }
    return 0;
}
