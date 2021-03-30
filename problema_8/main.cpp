/*
Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c, suma = 0;
    string multiplos_a, multiplos_b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    for (int i = 1; i <= c; i++){
       if((i % a == 0) and (i % b == 0)){
           suma += i;
           multiplos_a += to_string(i) + " + ";
       }else{
           if (i % a == 0){
               suma += i;
               multiplos_a += to_string(i) + " + ";
           }
           if (i % b == 0){
               suma += i;
               multiplos_b += to_string(i) + " + ";
           }
       }
    }
    cout << multiplos_a << multiplos_b << " = " << suma << endl;
    return 0;
}
