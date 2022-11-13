#include <iostream>
using namespace std;

int leerNumero(string p);

int main(){
    
   int x{10};

   int numero = leerNumero("Dame un numero: ");
   
   if(numero < 10){
    cout << "Tu numero es menor a 10 \n";
   } else {
    cout << "Tu numero es mayor a 10 \n";
   }
   

   int edad = leerNumero("Cual es tu edad? ");

   if(edad < 10 ){
    cout << "Eres un niño \n";
   } else if(edad >10 && edad <18){
    cout << "Eres un joven \n";
   } else if(edad >18 && edad <40){
    cout << "Eres un adulto \n";
   }
}

int leerNumero(string p){
    cout << p;
    int valor;
    cin >> valor;
    return valor;
}