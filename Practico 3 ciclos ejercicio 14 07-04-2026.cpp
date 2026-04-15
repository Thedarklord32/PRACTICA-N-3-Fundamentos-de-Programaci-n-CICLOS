#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;

    int a = 1, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main() {
    int n;

    cout << "Ingrese el valor de n (n-ésimo número de Fibonacci): ";
    cin >> n;

    int resultado = fibonacci(n);

    cout << "El " << n << "-ésimo número de Fibonacci es: " << resultado << endl;

    return 0;
}
