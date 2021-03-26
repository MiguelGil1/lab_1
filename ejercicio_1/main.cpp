/*
Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2

*/
#include <iostream>

using namespace std;

int main()
{
    int num_1; int num_2; int res;
    cout << "El siguiente programa pide dos numeros enteros e imprime su residuo de ambos.\nIngrese el primer numero:" << endl;
    cin >> num_1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> num_2;
    res = num_1 % num_2;
    cout << "El residuo de la division " << num_1 << "/" << num_2 << " es: " << res << endl;
    // Ahora sin la opereadcion %

    int contador = 0;

    while (contador <= num_1){
        if (contador < num_1 && contador + num_2 <= num_1){
            contador += num_2;
         }else{
            break;
        }
    }
    cout << "El residuo de la division " << num_1 << "/" << num_2 << " es: " << num_1 - contador << endl;


    /* Solucion profesor
     *11 - 3*1 = 8
     *11 - 3*2 = 5
     *11 - 3*4 = 2
     *11 - 3*4 = -1
     *
     *o  11 - 2 = 8
     *8 - 3 = 5
     *5 - 3 = 2
     *2 - 3 = -1
     *
     *(tmp >= 0 ) -> tm[ = tmp - 3
    */
    const int a = 11, b = 3;
    int cont = 0;
    int tmp = a;
    while (tmp >= 0){
        tmp -= b;
        // Operador ternario
        cont = (tmp >= 0) ? cont + 1: cont; // () ? <cond True> : <cond falsa>;
    }
    //printf("tmp = %d, cont = %d", "El residuo de %d/%d es %d\n", tmp, cont, a-cont*b);
     cout << "El residuo de la division " << a
          << "/" << b << " es: "
          << a - cont * b << endl;
    --cont;
    tmp = 0;

    for (int i = 0; i < cont; i++){
        tmp += b;
    }

    return 0;

}
