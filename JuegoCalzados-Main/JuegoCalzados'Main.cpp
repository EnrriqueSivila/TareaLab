// JuegoCalzados'Main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Calzado.h"
#include "ManejadorCalzado.h"

int main()
{
    srand(time(0)); 

    int intentos = 3; 
    int puntos = 0; 
    ManejadorCalzado manejador; 

    while (intentos > 0) {
        Calzado b; 
        Calzado x; 

        manejador.CompararCalzados(b, x);

        int respuesta;
        std::cout << "El Zapato X es par del Zapato B (1 = Si, 0 = No): ";
        std::cin >> respuesta;

        if ((respuesta == 1 && x.esParDe(b)) || (respuesta == 0 && !x.esParDe(b))) {
            std::cout << "Correcto" << std::endl;
            puntos++; 
        }
        else {
            std::cout << "Incorrecto." << std::endl;
        }

        intentos--; 
        std::cout << "Intentos restantes: " << intentos << std::endl << std::endl;
    }

    std::cout << "Puntos conseguidos: " << puntos << std::endl;

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
