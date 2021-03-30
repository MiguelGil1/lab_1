/*
Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
*/
#include <iostream>

using namespace std;

int main()
{
    int num2;
    for (int i = 1; i <= 50; i++){
       num2 = 51 - i;
       cout << i << "  " << num2 << endl;
    }
}
