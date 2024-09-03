#pragma once
#include <iostream>
#include <string>
using namespace std;

class Calzado {
private:
    int talla;      
    char ladopie;     

public:

    Calzado();

    bool esParDe(Calzado cal1);
    void verDatos();
};