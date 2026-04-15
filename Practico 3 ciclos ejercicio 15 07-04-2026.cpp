#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int horas = 0, minutos = 0, segundos = 0;

    while (true) {
        cout << "\r" << (horas < 10 ? "0" : "") << horas << ":"
             << (minutos < 10 ? "0" : "") << minutos << ":"
             << (segundos < 10 ? "0" : "") << segundos << flush;

        this_thread::sleep_for(chrono::seconds(1));

        segundos++;
        if (segundos == 60) {
            segundos = 0;
            minutos++;
            if (minutos == 60) {
                minutos = 0;
                horas++;
                if (horas == 24) {
                    horas = 0;
                }
            }
        }
    }

    return 0;
}
