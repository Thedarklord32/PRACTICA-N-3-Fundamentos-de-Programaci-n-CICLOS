#include <iostream>

using namespace std;
int main(){

int N, suma=0;

cout<<"Ingrese el valor de N: ";
cin >> N;

for(int i=1; i<=N; i+=2){
suma= suma+i;
}
cout<<"La suma de los numeros enteros entre 1 y " << N <<" es: " << suma << endl;

return 0;

}
