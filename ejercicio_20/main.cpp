#include <iostream>

using namespace std;

int main() {
    int n;
    int aux = 0, igual = 0;

    cout << "Ingrese el numero a evaluar: ";
    cin >> n;
    string aux_n = to_string(n);

    for(int ind = aux_n.length() - 1; ind >= 0; ind--) {
        if(aux_n[ind] == aux_n[aux]) {
            igual++;
        }
        aux++;
    }

    if(aux_n.length() == igual) {
        cout << "El numero ingresado es palindromo" << endl;
    } else {
        cout << "El numero ingresado no es palindromo" << endl;
    }

    return 0;
}
