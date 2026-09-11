#include <iostream>
using namespace std;

int maximo(int arreglo[], int n) {
    if (n == 1) {
        return arreglo[0];
    }

    int maxAnterior = maximo(arreglo, n - 1);
    if (arreglo[n - 1] > maxAnterior) {
        return arreglo[n - 1];
    } else {
        return maxAnterior;
    }
}

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arreglo[n];

    cout << "Ingrese los elementos del arreglo: ";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    int resultado = maximo(arreglo, n);

    cout << "El elemento maximo es: " << resultado << endl;

    return 0;
}