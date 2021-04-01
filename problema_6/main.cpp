/*
 * Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma innita:
e = (1/0!) + (1/1!) + (1/2!) + (1/3!) + (1/4!) + (1/5!) + ...
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 e = (1/0!) + (1/1!) + (1/2!) = 2,5
Nota: el formato de salida debe ser: e es aproximadamente: 2.5
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    float e = 0, factorial;
    cout << "Cuentos elementos desea implementar para la aploximacion de euler: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        factorial = 1;
        if (i == 0 || i == 1){
           e += 1;
        }else{
            for(int x = i; x > 0; x--){
                factorial = factorial * x;
            }
            e += (1/factorial);
        }
    }
    cout << "e es aproximadamente: " << e << endl;
    return 0;
}
