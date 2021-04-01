#include <iostream>

using namespace std;

int main()
{
    int mes, dia;
    cout << "Ingrese el numero del mes: ";
    cin >> mes;
    while(mes <= 0 || mes > 12){
        cout << mes << " es un mes invalido" << endl;
        cout << "Ingrese el numero del mes: ";
        cin >> mes;
    }
    cout << "Ingrese un dia: ";
    cin >> dia;
    while(dia <= 0 || dia > 31){
        cout << dia << " es un dia invalido" << endl;
        cout << "Ingrese un dia: ";
        cin >> dia;
    }
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if (dia > 31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }else{
           cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }else if (mes == 2){
        if(dia > 29){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }else if ( dia == 29){
            cout << dia << "/" << mes << " posiblemente bisiesto" << endl;
        }else{
             cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia > 30){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }else{
           cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    return 0;
}
