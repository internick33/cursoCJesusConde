#include <iostream>
using namespace std;

int leerNumero();

int main(){
  int valor = leerNumero();
  cout<< "El doble del numero introducido es: " <<valor*2 <<"\n";
}

int leerNumero(){
    int numero;
    cout<< "Introduce un numero... \n";
    cin>> numero;
    return numero; 
}
