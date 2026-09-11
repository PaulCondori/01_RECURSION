#include<iostream>
using namespace std;
bool buscar(int arreglo[], int n, int x){
    if (n == 0){
        return false;
    }
    if (arreglo[n - 1] == x){
        return true;
    }
    return buscar(arreglo, n - 1, x);
}
int main(){
    int n, x;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    
    int arreglo[n];

    cout << "Ingrese los elementos del arreglo: ";
    for (int i = 0; i < n; i++){
        cin >> arreglo[i];
    }
    cout << "Ingrese el valor que desea buscar: ";
    cin >> x;
    
    if(buscar(arreglo, n, x)){
        cout << "El valor " << x << " se encuentra en el arreglo." << endl;
    } else {
        cout << "El valor " << x << " no se encuentra en el arreglo." << endl;
    }
    return 0;
}