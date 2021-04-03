#include <iostream>

using namespace std;

int main()
{
    int mayor = 0, aux = 0, igual,resultado,i_mayor,j_mayor;
    cout << "escriba un programa que calcule el numero palindromo mas grande que se puede obtener como una multiplicacion de numeros de 3 digitos." << endl;
    for(int i = 100; i < 1000; i++){
        igual = 0;
        aux = 0;
        string string_i = to_string(i);
        for(int ind = string_i.length() - 1; ind >= 0; ind--) {
            if(string_i[ind] == string_i[aux]) {
                igual++;
            }
            aux++;
        }
        if(string_i.length() == igual) {
            /*for(int j = i; j < 1000; j++){
                igual = 0;
                aux = 0;
                string string_j = to_string(j);
                for(int indx = string_j.length() - 1; indx >= 0; indx--) {
                    if(string_j[indx] == string_j[aux]) {
                        igual++;
                    }
                    aux++;
                }
                if(string_j.length() == igual){
                    resultado = i * j;*/
            resultado = i * i;
                    if (resultado > mayor){
                        mayor = resultado;
                        i_mayor = i;
                        j_mayor = i;
                    }
                }
            }
        //}
    //}
    cout << i_mayor << "*" << j_mayor << "=" << mayor << endl;
    return 0;
}
