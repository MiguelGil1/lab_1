/*
 Patron:
  *
 ***
*****
*******
 ******
  ***
  *
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero impar: ";
    cin >> n;
    while(n % 2 == 0){
        cout << "Ingrese un numero impar: ";
        cin >> n;
    }
    int vacio = n/2, asteriscos = 1, contvacio = 0, contasteriscos,limvacio;
    while (vacio >= 0){
        contvacio = 0;
        while (contvacio != vacio){
            cout << " ";
            contvacio += 1;
        }
        contasteriscos = 0;
        while (contasteriscos != asteriscos){
            cout << "*";
            contasteriscos += 1;
        }
        cout << "" << endl;
        vacio -= 1;
        asteriscos +=2;
    }
    vacio = 1;
    contvacio = 1;
    limvacio = int(n/2);
    asteriscos -= 4;
    contasteriscos = asteriscos;
    while (vacio <= limvacio){
        contvacio = vacio;
        contasteriscos = asteriscos;
        while (contvacio > 0){
            cout << " ";
            contvacio -= 1;
        }
        while (contasteriscos > 0){
            cout << "*";
            contasteriscos -= 1;
        }
        cout << "" << endl;
        asteriscos -= 2;
        vacio += 1;
    }
    return 0;
}
