#include "operacionesMatematicas.h"
#include <iostream>
using namespace std;

int leerNumero();

int main(){
  int valor1 = leerNumero();
  int valor2 = leerNumero();  
  cout<< "La suma de dos numeros es: " <<sumar(valor1, valor2) <<"\n";
}

int leerNumero(){
    int numero;
    cout<< "Introduce un numero... \n";
    cin>> numero;
    return numero; 
}