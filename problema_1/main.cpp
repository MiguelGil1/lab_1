/*
    Escriba un programa que identique si un carácter ingresado es una vocal, una consonante o
 ninguna de las 2 e imprima un mensaje según el caso.
*/
#include <iostream>

using namespace std;

int main()
{
    string letra;
    cout << "El siguiente programa determina si un caracter ingresado es letre, consonante o no es letra.\nIngrese el caracter: " << endl;
    cin >> letra;
   bool key = false;
    while (key == false)
    {
      if(letra.length() == 1){
          key = true;
      }else{
          cout << "Debe ingresar solo un caracter." << endl;
          cin >> letra;
      }
    }
    for (int i = 0; i < letra.length(); i++) {
        // Y cambiar cada letra por su representación
        // minúscula
        letra[i] = tolower(letra[i]);
    }
    letra = std::string(letra);
    if (letra == "a"  || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        cout << "Es vocal." << endl;
    }else if (letra == "b"  || letra == "c" || letra == "d" || letra == "f" || letra == "g" || letra == "h"  || letra == "j" || letra == "k" || letra == "l" || letra == "m" || letra == "n"  || letra == "s" || letra == "p" || letra == "q" || letra == "r" || letra == "s"  || letra == "v" || letra == "w" || letra == "x" || letra == "y" || letra == "z"){
        cout << "Es consonante." << endl;
    }else{
        cout << "No es letra." << endl;
    }
    return 0;
}
