#include "Calzado.h"
#include <cstdlib>
#include <ctime>

Calzado::Calzado() {
    talla = rand() % 6 + 40; 
    ladopie = rand() % 2 == 0 ? 'I' : 'D'; 
}

bool Calzado::esParDe(Calzado cal1) {
    return (talla == cal1.talla && ladopie != cal1.ladopie);
}

void Calzado::verDatos() {
    string lado = (ladopie == 'I') ? "Izquierda" : "Derecha";
    cout << "Talla: " << talla << ", Lado pie: " << lado << endl;
}
