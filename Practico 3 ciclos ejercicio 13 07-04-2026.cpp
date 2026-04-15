#include <iostream>
using namespace std;

int main() {
    cout << "Tabla de sumas del 1 al 10:\n";

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " + " << j << " = " << i + j << "\t";
        }
        cout << endl;
    }

    return 0;
}
