/*
Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo.
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Ingrese el primer lado: ";
    cin >> a;
    cout << "Ingrese el segundo lado: ";
    cin >> b;
    cout << "Ingrese el tercer lado: ";
    cin >> c;
    if(a+b<=c || a+c <= b || b+c <= a){
        cout << "Las longitudes ingresadas no son un triangulo." << endl;
    }else if (a == b and b == c){
        cout << "Se forma un triangulo equilatero" << endl;
    }else if( a == b || a == c || b == c){
        cout << "Se forma un triangulo isosceles" << endl;
    }else{
        cout << "Se forma un triangulo escaleno" << endl;
    }
    return 0;
}
