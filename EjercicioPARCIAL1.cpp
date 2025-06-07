#include <iostream>
using namespace std;

int main() {
    int numeros[10]; // tiene 10 números
    int pares = 0, impares = 0;

    // Ingresar 10 números
    cout << "Ingresa 10 números:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    cout << "\nCantidad de números pares: " << pares << endl;
    cout << "\nCantidad de números impares: " << impares << endl;

    return 0;
}
