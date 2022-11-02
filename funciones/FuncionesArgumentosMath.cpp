#include <iostream>
using namespace std;

int leerNumero();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

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

int sumar(int a, int b){
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    return a / b;
}
