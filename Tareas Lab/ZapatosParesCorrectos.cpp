#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Calzado {
private:
    int talla;
    char ladopie;

public:
 
    Calzado() {
        talla = rand() % 6 + 40; 
        ladopie = rand() % 2 == 0 ? 'I' : 'D'; 
    }

    bool esParDe(Calzado cal1) {
        return (talla == cal1.talla && ladopie != cal1.ladopie);
    }

    // Método para mostrar los datos del zapato
    void verDatos() {
        string lado = (ladopie == 'I') ? "Izquierda" : "Derecha";
        cout << "Talla: " << talla << ", Lado pie: " << lado << endl;
    }
};

int main() {
    srand(time(0)); 

    int intentos = 3; 
    int puntos = 0; 

    while (intentos > 0) {
        Calzado a; 
        Calzado b; 
        
        cout << "Verificar si A es par de B:" << endl;
        b.verDatos();
        a.verDatos();

        int respuesta;
        cout << "A es par de B (1 = Si, 0 = No): ";
        cin >> respuesta;

        if ((respuesta == 1 && a.esParDe(b)) || (respuesta == 0 && !a.esParDe(b))) {
            cout << "Correcto" << endl;
            puntos++; 
        } else {
            cout << "Incorrecto." << endl;
        }

        intentos--;
        cout << "Intentos restantes: " << intentos << endl << endl;
    }

    cout << "Puntos conseguidos: " << puntos << endl;

    return 0;
}

