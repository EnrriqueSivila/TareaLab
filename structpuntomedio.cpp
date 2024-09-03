#include <iostream>

using namespace std;

// Definimos una estructura para representar un punto en 2D
struct Punto {
    double x;
    double y;
};

// Función que calcula y muestra el punto medio entre dos puntos
void PuntoMedio(const Punto p1, const Punto p2) {
    double puntoMedioX = (p1.x + p2.x) / 2;
    double puntoMedioY = (p1.y + p2.y) / 2;
    cout << "El punto medio es: " << "en X " << puntoMedioX << ", " << "en Y " << puntoMedioY << endl;
}

int main() {
    Punto p1, p2;

    // Solicitamos al usuario las coordenadas del primer punto
    cout << "Introduce las coordenadas del primer punto (x y): " << endl;
    cin >> p1.x >> p1.y;

    // Solicitamos al usuario las coordenadas del segundo punto
    cout << "Introduce las coordenadas del segundo punto (x y): " << endl;
    cin >> p2.x >> p2.y;

    // Llamamos a la función para calcular y mostrar el punto medio
    PuntoMedio(p1, p2);

    return 0;
}

