#include <iostream>
using namespace std;

string leerString(string p);
string leerNombreCompleto(string p);

int main(){
    string tuEdad = leerString("Cual es tu edad?: "); 
    cout << "Tu nombre es: " << tuEdad <<"\n";

    string tuNombre = leerNombreCompleto("Cual es tu nombre completo?: "); 
    cout << "Tu nombre es: " << tuNombre <<"\n";
    cout << "Tu nombre tiene: " << tuNombre.length() <<" caracteres \n";
}

string leerString(string p){
    cout << p;
    string valor;
    cin >> valor;
    return valor;
}

string leerNombreCompleto(string p){
    cout << p;
    string valor;
    getline(cin >> ws, valor);
    return valor;
}