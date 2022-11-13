#include <iostream>
using namespace std;

const double MyPI = 3.1416;
double leerRadio(string p);
void calcularArea(double miRadio);

int main(){
    double tuRadio = leerRadio("Cual es el radio de tu circulo?: "); 
    calcularArea(tuRadio);
}

double leerRadio(string p){
    cout << p;
    double valor;
    cin >> valor;
    return valor;
}

void calcularArea(double miRadio){
    cout << "El area del circulo de radio " <<miRadio <<" es " <<MyPI * miRadio * miRadio <<"\n"; 
}

