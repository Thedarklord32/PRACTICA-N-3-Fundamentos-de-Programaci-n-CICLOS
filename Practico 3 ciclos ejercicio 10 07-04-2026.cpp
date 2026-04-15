#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, signo = 1;
    double X, suma = 0, potencia;

    cout << "Ingrese el valor de X: ";
    cin >> X;

    cout << "Ingrese un valor impar de n: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Error: n debe ser impar";
    } else {
        potencia = X;

        for (int i = 1; i <= n; i = i + 2) {
            suma = suma + signo * (potencia / factorial(i));
            potencia = potencia * X * X;
            signo = signo * -1;
        }

        cout << "La suma de la serie es: " << suma;
    }

    return 0;
}
