/*
Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N.
*/
#include <iostream>

using namespace std;

int main()
{
    //manera #1 string:
    string n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El numero " << n << " tiene " << n.length() << " digitos." << endl;

    //Manera #2 division por 10
    int n1,contador = 0, tmp;
    cout << "Ingrese un numero: ";
    cin >> n1;
    tmp = n1;
    while(n1/10 > 0){
        n1 = n1/10;
        contador++;
        cout << n1 << endl;
    }
    cout << "El numero " << tmp << " tiene " << contador+1 << " digitos." << endl;
return 0;
}
