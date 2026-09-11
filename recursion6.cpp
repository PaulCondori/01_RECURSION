#include<iostream>
using namespace std;

int serie(int n){
    if(n == 1){
        return 4;
    }

    if (n == 2){
        return 6;
    }

    return serie(n - 1) + serie(n - 2);
}
int main(){
    int n;
    cout << "La serie es: 4, 6, 10, 16, 26, 42..."<< endl;
    cout << "Ingrese la posicion del elemento que quiere descubrir: ";
    cin >> n;

    if (n <= 0){
        cout << "La posicion debe ser un numero positivo." << endl;
    } else{
        cout << "El elemento " << n << " de la serie es: " << serie(n) << endl;
    }
    return 0;
}