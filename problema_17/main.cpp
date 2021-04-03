#include <iostream>

using namespace std;

int main()
{
    int num, n = 1,divisors = 0,secuencia = 0;
    cout << "Ingrese la cantidad de multiplos: ";
    cin >> num;
    while(divisors < num + 1){
        divisors = 0;
        secuencia = (n*(n+1))/2;
        cout << secuencia << endl;
        for(int i = 1; i <= secuencia / 2; i++){
            if(secuencia % i == 0){
                divisors ++;
            }
        }
        divisors += 1;
        n++;
    }
    cout << "El numero es: " << secuencia << " que tiene " << divisors << " divisores" << endl;
    return 0;
}
