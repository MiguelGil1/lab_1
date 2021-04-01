#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    int aux = 0, igual = 0;

    cout << "Ingrese el numero a evaluar: ";
    getline(cin >> ws, n);

    for(int ind = n.length() - 1; ind >= 0; ind--) {
        if(n[ind] == n[aux]) {
            igual++;
        }
        aux++;
    }

    if(n.length() == igual) {
        cout << "El numero ingresado es palindromo!! :D" << endl;
    } else {
        cout << "El numero ingresado no es palindromo!! :D" << endl;
    }

    return 0;
}
