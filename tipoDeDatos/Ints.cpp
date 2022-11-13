#include <iostream>
using namespace std;

int main(){
    int x{};
    bool y{};
    char z{};
    short a{};
    long b{};
    float c{};
    double d{};

    cout<< "x tiene: " <<sizeof(x) <<"bytes \n";
    cout<< "y tiene: " <<sizeof(y) <<"bytes \n";
    cout<< "z tiene: " <<sizeof(z) <<"bytes \n";
    cout<< "a tiene: " <<sizeof(a) <<"bytes \n";
    cout<< "b tiene: " <<sizeof(b) <<"bytes \n";
    cout<< "c tiene: " <<sizeof(c) <<"bytes \n";
    cout<< "d tiene: " <<sizeof(d) <<"bytes \n";
}