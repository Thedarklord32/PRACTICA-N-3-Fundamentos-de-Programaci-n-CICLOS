#include <iostream>
using namespace std;

int main() {
    int N, producto = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    if (N < 1) {
        cout << "Debe ingresar un numero mayor o igual a 1";
    } else {
        for (int i = 1; i <= N; i++) {
            producto = producto * i;
        }

        cout << "El producto de los primeros " << N << " numeros enteros es: " << producto;
    }

    return 0;
}
