#include <iostream>
using namespace std;

int main(){

    int a{12};
    int b(20);
    int resultado;
   
    resultado = a + b;
    cout<< "la suma de a y b vale:" <<resultado <<"\n";

    resultado = a - b;
    cout<< "la resta de a y b vale:" <<resultado <<"\n";

    resultado = a * b;
    cout<< "la multiplicacion de a y b vale:" <<resultado <<"\n";

    resultado = a / b;
    cout<< "la division de a y b vale:" <<resultado <<"\n";

    resultado = a % b;
    cout<< "el resto de a y b vale:" <<resultado <<"\n";

}