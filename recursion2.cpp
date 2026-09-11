#include <iostream>
using namespace std;
int sumaArreglos(int arreglo[], int n){
	if (n == 0){
		return 0;
	}
	return arreglo[n - 1] + sumaArreglos(arreglo, n - 1);
}
int main(){
	int n;

	cout << "ingresa la cantidad de elementos del arreglo: ";
	cin >> n;

	int arreglo[n];

	cout << "ingrese los elementos del arreglo: ";
	for (int i = 0; i < n; i++){
		cin >> arreglo[i];

	}
	int resultado = sumaArreglos(arreglo, n);
	cout << "La suma de los elementos es: " << resultado << endl;
	return 0;
}
