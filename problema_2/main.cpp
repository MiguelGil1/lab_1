/*
 * Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10
*/
#include <iostream>

using namespace std;

int main()
{
    int n,cincuentamil,veintemil,diezmil,cincomil,dosmil,mil,quinientos,doscientos,cien,cincuenta;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> n;
    cincuentamil = int(n/50000);
    cout << "$50.000 : " << cincuentamil << endl;
    n = n - (cincuentamil * 50000);
    veintemil = int(n/20000);
    cout << "$20.000 : " << veintemil << endl;
    n = n - (veintemil * 20000);
    diezmil = int(n/10000);
    cout << "$10.000 : " << diezmil << endl;
    n = n - (diezmil * 10000);
    cincomil = int(n/5000);
    cout << "$5.000 : " << cincomil << endl;
    n = n - (cincomil * 5000);
    dosmil = int(n/2000);
    cout << "$2.000 : " << dosmil << endl;
    n = n - (dosmil * 2000);
    mil = int(n/1000);
    cout << "$1.000 : " << mil << endl;
    n = n - (mil * 1000);
    quinientos = int(n/500);
    cout << "$500 : " << quinientos << endl;
    n = n - (quinientos * 500);
    doscientos = int(n/200);
    cout << "$200 : " << doscientos << endl;
    n = n - (doscientos * 200);
    cien = int(n/100);
    cout << "$100 : " << cien << endl;
    n = n - (cien *100);
    cincuenta = int(n/50);
    cout << "$50 : " << cincuenta << endl;
    n = n - (cincuenta * 50);
    cout << "Faltant: $" << n << endl;
    return 0;
}
