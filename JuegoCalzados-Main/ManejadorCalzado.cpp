#include "ManejadorCalzado.h"
#include <iostream>

void ManejadorCalzado::CompararCalzados(Calzado cal1, Calzado cal2) {

    std::cout << "Verificando si los calzados son un par:" << std::endl;
    cal1.verDatos();
    cal2.verDatos();

    if (cal1.esParDe(cal2)) {
        std::cout << "Los calzados son un par." << std::endl;
    }
    else {
        std::cout << "Los calzados no son un par." << std::endl;
    }
}
