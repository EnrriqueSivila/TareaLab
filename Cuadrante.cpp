#include <iostream>

using namespace std;

int DCuadrante(double x, double y) {
    if (x > 0 && y > 0) {
        return 1;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else if (x > 0 && y < 0) {
        return 4;
    } else {
        return 0;
    }
}

int main() {
    double x, y;

    cout << "Introduce las coordenadas del punto (x y): "<<endl;
    cin >> x >> y;

    int cuadrante = DCuadrante(x, y);

    if (cuadrante == 0) {
        cout << "El punto está en el origen o en uno de los ejes." << endl;
    } else {
        cout << "El punto está en el cuadrante: " << cuadrante << endl;
    }

    return 0;
}

