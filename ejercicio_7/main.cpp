/* Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15
*/
#include <iostream>

using namespace std;

int main()
{
    int num, a;
    a = 0;
    cout << "El sigueinte programa imprime la sumatora de todos los numeros desde el 0 hasta el N (numero ingresado por el usuario).\nIngrese el numero: " << endl;
    cin >> num;
    for (int i = 0; i <= num; i++){
        a += i;
    }
    cout << "La sumatoria desde 0 hasta " << num << " es: " << a << endl;
    return 0;
}
