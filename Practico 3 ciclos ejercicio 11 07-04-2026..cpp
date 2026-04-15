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

int main() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    int resultado = mcd(a, b);

    cout << "El MCD de " << a << " y " << b << " es: " << resultado << endl;

    return 0;
}
