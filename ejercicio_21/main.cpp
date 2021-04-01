/*
 Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K
*/
#include <iostream>

using namespace std;

int main()
{
    string c;
    cout << "Ingrese una letra: ";
    cin >> c;
    while(c.length() != 1){
        cout << "Ingrese una letra: ";
        cin >> c;
    }
    for (int i = 0; i <= c.length(); i++){
        if(c[i] >= 'a' && c[i] <= 'z'){
           c = toupper(c[i]);
        } else if(c[i] >= 'A' && c[i] <= 'Z'){
           c = tolower(c[i]);
        }
    }
    cout << c << endl;
    return 0;
}
