#include <iostream>
using namespace std;

int leerNumero();
void imprimirDoble(int numero);

int main(){
  int valor = leerNumero();
  imprimirDoble(valor);
}

int leerNumero(){
    int numero;
    cout<< "Introduce un numero... \n";
    cin>> numero;
    return numero; 
}

void imprimirDoble(int numero){
    cout<< "El doble del numero introducido es: " <<numero * 2 <<"\n";
}
