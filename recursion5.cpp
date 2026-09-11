#include<iostream>
using namespace std;
void convertirBinario(int n){
    if(n == 0){
        return;
    }

    convertirBinario(n / 2);
    cout << n % 2;
}
int main(){
    int n;

    cout << "Ingrese un numero en base 10: ";
    cin >> n;

    cout << "Su equivalencia en base 2 es: ";
    if (n == 0){
        cout << "0";
    }else {
        convertirBinario(n);
    }
    cout << endl;

    return 0;
}