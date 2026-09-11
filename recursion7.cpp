#include<iostream>
using namespace std;

int invertir(int n, int resultado = 0){
    if(n == 0){
        return resultado;
    }
    return invertir(n / 10, resultado * 10 + n % 10);

}
int main(){
    int n;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n < 0){
        cout << "el numero debe ser positivo." << endl;
    } else {
        cout << "Su imagen especular es: " << invertir(n) << endl;
    }

    return 0;
}