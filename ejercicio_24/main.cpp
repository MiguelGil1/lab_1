/*
. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++

*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    string signos;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        signos = "";
        if(i == 0 || i == n){
            for(int j = 0; j < n; j++){
                signos += "+";
            }
            cout << signos << endl;
        }else{
            for (int k = 0; k < n; k++){
                if (k == 0 || k == n-1){
                    signos += "+";
                }else{
                    signos += " ";
                }
            }
            cout << signos << endl;
        }
    }
    return 0;
}
