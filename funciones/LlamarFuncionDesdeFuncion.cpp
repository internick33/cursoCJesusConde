#include <iostream>
using namespace std;

void funcionA();
void funcionB();

int main(){
   cout<< "Empieza el programa... \n";
   funcionA();
   cout<< "Finaliza el programa... \n";
}

void funcionA(){
    cout<< "Llamando a la funcion A... \n";
    funcionB();
    cout<< "Llamando a la funcion A... \n";
}

void funcionB(){
    cout<< "Llamando a la funcion B... \n";
}