#include <iostream>
using namespace std;

int sumarDos(int a, int b);
int restarDos(int a, int b);
int multiplicarDos(int a, int b);
int dividirDos(int a, int b);

int main(){
    int x{ 10 };

    cout << "x vale: " <<x <<"\n";
    x++;
    cout << "x ahora vale: " <<x <<"\n";
    x--;
    --x;
    --x;
    cout << "x vale: " <<x <<"\n"; 
    cout <<"\n"; 

    int resultado = sumarDos(4,7);
    cout << "a + b vale: " << resultado <<"\n"; 

}

int sumarDos(int a, int b){
    return a + b;
}

int restarDos(int a, int b){
    return a - b;
}

int multiplicarDos(int a, int b){
    return a * b;
}

int dividirDos(int a, int b){
    return a / b;
}
