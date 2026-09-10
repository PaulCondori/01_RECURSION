#include<iostream>
using namespace std;

long int factorial (int n);

int main (){
	int n;
	cout << "calcula el factorial de un numero entero positivo: " << endl;
	do{
		cout<< endl<<"Digite un numero positivo: ";
		cin >> n;
		if(n < 0)
		cout << endl << "--> error, ingreso valr negativo, intente de nuevo...";	
	} while (n < 0);
	
	cout << endl << n <<"! = "<< factorial(n);
	return 0;
	
}
long int factorial(int n){
	if((n == 0) || (n == 1)){
	return (1);
	}
	else{
		return (n * factorial(n-1));
	}
}
