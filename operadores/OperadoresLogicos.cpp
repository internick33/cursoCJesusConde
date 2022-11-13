#include <iostream>
using namespace std;


int main(){
    int edad { 10 };
    bool vivo{1};

    if(edad > 1 || vivo){
        cout << "Datos validos \n";
    }

    if(edad != 10){
        cout << "Tu numero es diferente de 10 \n";
    } else {
        cout << "Tu numero es 10 \n";
    }

    if(edad < 5 && vivo){
         cout << "Datos validos \n";
    } else {
         cout << "Datos no validos \n";
    }

    

}

