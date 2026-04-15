#include <iostream>
#include <math.h>

using namespace std;
int main(){

int N, suma=0, X;

cout<<"Ingrese el valor de N: ";
cin >> N;

cout<<"Ingrese el valor de X: ";
cin >> X;

for(int i=1; i<=N; i++){
suma= suma+pow(X,i);
}
cout<<"La suma de la serie es: "<< suma << endl;

return 0;

}
