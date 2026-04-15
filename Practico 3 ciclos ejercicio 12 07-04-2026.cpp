#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}

int main() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    int resultado = mcm(a, b);

    cout << "El MCM de " << a << " y " << b << " es: " << resultado << endl;

    return 0;
}
