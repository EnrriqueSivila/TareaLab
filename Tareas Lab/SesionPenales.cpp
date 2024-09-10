#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

class Jugador {
private:
    short posicionTiro; 
public:        
    int nroGoles; 

    Jugador() {
        posicionTiro = 0;
        nroGoles = 0;
    }        

    void patear() {
        do {
            cout << "Introduzca su direccion de Tiro (1-9): ";
            cin >> posicionTiro;
            if (posicionTiro < 1 || posicionTiro > 9) {
                cout << "Posición inválida. Inténtelo de nuevo." << endl;
            }
        } while (posicionTiro < 1 || posicionTiro > 9); 
    }

    short getPosicionTiro() {
        return posicionTiro;
    }
};

class Arquero {
private:
    short posicionTapada; 
public:
    float altura;
    short posicionInicial; 
    int nroAtajadas; 

    Arquero() {
        posicionInicial = 8;
        nroAtajadas = 0;
        altura = 1.75;
        posicionTapada = 5;
    }

    Arquero(float alt) {
        nroAtajadas = 0;
        altura = alt;
        posicionTapada = 5;
        calcularCuadros();
    }

    void calcularCuadros() {
      
    }

    void Atajar() {
        int random_x = rand() % 9;
        posicionTapada = random_x + 1; 
        cout << "Arquero se arrojó a la posición " << posicionTapada << endl;
    }

    short getPosicionTapada() {
        return posicionTapada;
    }

    bool logroAtajar(Jugador jug) {
        return jug.getPosicionTiro() == posicionTapada;
    }
};

class Arco {
private:
    Jugador jugador; 
    Arquero arquero; 
public:
    Arco(Jugador j, Arquero a) : jugador(j), arquero(a) {}

    void graficarArcoInicial() {
        cout << " ----------- " << endl;
        cout << "| 1 | 2 | 3 |" << endl;
        cout << "| 4 | 5 | 6 |" << endl;
        cout << "| 7 | 8 | 9 |" << endl;
    }

    void dibujarTiro(short posicionTiro, short posicionTapada) {
        cout << " ----------- " << endl;

        for (int i = 1; i <= 9; i++) {
            if (i == posicionTiro && i == posicionTapada) {
                cout << "| X "; // Si el arquero ataja el tiro (X)
            } else if (i == posicionTiro) {
                cout << "| T "; // T representa el tiro
            } else if (i == posicionTapada) {
                cout << "| A "; // A representa al arquero
            } else {
                cout << "|   "; 
            }

            if (i % 3 == 0) {
                cout << "|" << endl; 
            }
        }
    }
};

int main() {
    srand(static_cast<unsigned>(time(0))); 

    Jugador j1;
    Arquero aq;
    Arco arco(j1, aq);

    for(int i = 0; i < 5; i++) {
        arco.graficarArcoInicial(); 
        j1.patear(); 
        aq.Atajar(); 

        arco.dibujarTiro(j1.getPosicionTiro(), aq.getPosicionTapada()); 

        if(aq.logroAtajar(j1)) {
            cout << "NO FUE GOL" << endl;
            aq.nroAtajadas++; 
        } else {
            cout << "GOL" << endl;
            j1.nroGoles++; 
        }
    }

    cout << "Goles marcados: " << j1.nroGoles << endl;
    cout << "Atajadas hechas: " << aq.nroAtajadas << endl;
    
    return 0;
}

