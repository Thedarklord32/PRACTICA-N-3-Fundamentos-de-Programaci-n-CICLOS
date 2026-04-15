#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    double X, suma = 0;

    cout << "Ingrese un numero real X: ";
    cin >> X;

    cout << "Ingrese el valor de N (limite de la serie): ";
    cin >> N;

    double potencia = X;
    for (int i = 1; i <= N; i++) {
        suma += (potencia / factorial(i));
        potencia *= X;
    }

    cout << "El valor de la serie es: " << suma << endl;

    return 0;
}
