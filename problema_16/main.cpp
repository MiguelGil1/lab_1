/*
La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonicación si imprime la serie.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,elementos = 0,k,semilla = 0;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    k = n;
    while(k != 1){
        if(k%2 == 0){
            k = k / 2;
        }else{
            k = (3 * k) + 1;
        }
        if(k < n and elementos == 0){
            semilla = k;
        }
        if(semilla != 0){
           elementos++;
        }
    }
    cout << "La serie mas larga es con la semilla: " << semilla << ", teniendo " << elementos << " terminos." << endl;
    return 0;
}
