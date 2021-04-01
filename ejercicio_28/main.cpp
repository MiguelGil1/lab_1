/*Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma innita:
π = 4(1 − 1/3 + 1/5 − 1/7 + 1/9 ...)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 π = 4(1 − 1/3 + 1/5) = 3,46667, por lo que se debe imprimir:
pi es aproximadamente: 3.46667
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    float pi = 0, denominador = 3;
    cout << "Ingrese la cantidad de terminos para paroximar pi: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        if (i == 0){
            pi += 1;
        }else if (i % 2 != 0){
            pi -= 1 / denominador;
            denominador += 2;
        }else{
            pi += 1 / denominador;
            denominador += 2;
        }
    }
    pi = pi * 4;
    cout << "Pi es aproximadamente: " << pi << endl;
    return 0;
}
