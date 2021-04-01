/*
 * Escriba un programa para leer dos números enteros con el siguiente signicado: el
valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido.
*/
#include <iostream>

using namespace std;

int main()
{
    string a,b,minutos_a_cadena,horas_a_cadena,minutos_b_cadena,horas_b_cadena;
    int minutos_a, horas_a,minutos_b,horas_b;
    cout << "Ingrese la hora actual:";
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if(i == 0 || i == 1){
            horas_a_cadena += a[i];
        }else if(i == 2 || i == 3){
            minutos_a_cadena += a[i];
        }
    }
    minutos_a = stoi(minutos_a_cadena);
    horas_a = stoi(horas_a_cadena);
    cout << "Ingrese la duracion:";
    cin >> b;
    for(int i = 0; i < b.length(); i++){
        if(i == 0 || i == 1){
            horas_b_cadena += b[i];
        }else if(i == 2 || i == 3){
            minutos_b_cadena += b[i];
        }
    }
    minutos_b = stoi(minutos_b_cadena);
    horas_b = stoi(horas_b_cadena);
    return 0;
}
