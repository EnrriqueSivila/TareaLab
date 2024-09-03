#include <iostream>

using namespace std;


void PuntoMedio(double x1, double y1, double x2, double y2) {
    float puntoMedioX = (x1 + x2) / 2;
    float puntoMedioY = (y1 + y2) / 2;
    cout << "El punto medio es: " <<"en x "<< puntoMedioX << ", " << "en y "<<puntoMedioY <<endl;
}


int main() {
	
    float x1, y1, x2, y2;

   	cout << "Introduce las coordenadas del primer punto (x y): "<<endl;
    cin >> x1 >> y1;

    cout << "Introduce las coordenadas del segundo punto (x y): "<<endl;
    cin >> x2 >> y2;

    PuntoMedio(x1, y1, x2, y2);

    return 0;
}

