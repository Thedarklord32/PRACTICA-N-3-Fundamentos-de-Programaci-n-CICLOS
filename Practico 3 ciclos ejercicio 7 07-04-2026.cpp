#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    if (n == 0) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;

    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    if (N < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        int result = factorial(N);
        cout << "El factorial de " << N << " es: " << result << endl;
    }

    return 0;
}
