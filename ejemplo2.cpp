#include<iostream>
using namespace std;
int MCD(int x, int y);
int main(){
	int v1, v2;
	cout << "Programa para calculo de Maximo Comun Divisor de numeros enteros";
	cout << endl << "Introdusca el primer valor entero: ";
	cin >> v1;
	cout << "Y ahora el segundo valor entero: ";
	cin >> v2;
	cout << endl << endl<< "Resultado:   El MCD de " << v1 << " y " << v2 << "es: ";
	cout << MCD(v1,v2);
	return 0;
}
int MCD(int x, int y){
	if(y == 0)
	return x;
	else
	return MCD(y, x%y);
	
}
