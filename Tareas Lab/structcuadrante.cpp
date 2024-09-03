#include <iostream>

using namespace std;

struct punto{
	float x;
	float y;
};
int DCuadrante(punto pc) {
    if (pc.x > 0 && pc.y > 0) {
        return 1;
    } else if (pc.x < 0 && pc.y > 0) {
        return 2;
    } else if (pc.x < 0 && pc.y < 0) {
        return 3;
    } else if (pc.x > 0 && pc.y < 0) {
        return 4;
    } else {
        return 0;
    }
}

int main() {
    
    punto pc;
    
    cout << "Introduce las coordenadas del punto (x y): "<<endl;
    cin >> pc.x >> pc.y;

    int cuadrante = DCuadrante(pc);

    if (cuadrante == 0) {
        cout << "El punto está en el origen o en uno de los ejes." << endl;
    } else {
        cout << "El punto esta en el cuadrante: " << cuadrante << endl;
    }

    return 0;
}

