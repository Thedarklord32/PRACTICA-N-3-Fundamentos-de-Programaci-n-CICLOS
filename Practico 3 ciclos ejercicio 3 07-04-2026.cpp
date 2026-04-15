#include <iostream>
#include <math.h>

using namespace std;
int main(){

int N, suma=0, X;

cout<<"Ingrese el valor de N: ";
cin >> N;

for(int i=1; i<=N; i++){
suma= suma+(i*i);
}
cout<<"La suma de la serie es: "<< suma << endl;

return 0;

}
