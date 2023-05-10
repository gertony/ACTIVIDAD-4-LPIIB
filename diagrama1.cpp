#include <iostream>
#include <string>

using namespace std;

class CaperucitaRoja {
    private:
        string nombre;
    public:
        CaperucitaRoja(string nombre) {
            this->nombre = nombre;
        }
        void caminar() {
            cout << "Caperucita Roja camina hacia la casa de la Abuela" << endl;
        }
        void saludar() {
            cout << "Caperucita Roja saluda a la Abuela" << endl;
        }
        void entregarComida() {
            cout << "Caperucita Roja entrega la comida a la Abuela" << endl;
        }
};

class Lobo {
    public:
        void esconderse() {
            cout << "El Lobo se esconde detrás de un árbol" << endl;
        }
        void enganar() {
            cout << "El Lobo engaña a Caperucita Roja y la envía al camino largo" << endl;
        }
        void correr() {
            cout << "El Lobo corre hacia la casa de la Abuela" << endl;
        }
};
class Abuela {
    private:
        string nombre;
    public:
        Abuela(string nombre) {
            this->nombre = nombre;
        }
        void recibirComida() {
            cout << "La Abuela recibe la comida de Caperucita Roja" << endl;
        }
        void preguntar() {
            cout << "La Abuela pregunta quién es y Caperucita Roja responde" << endl;
        }
        void avisar() {
            cout << "La Abuela avisa a Caperucita Roja que el Lobo está en su casa" << endl;
        }
};
class Bosque {
    public:
        void caminoLargo() {
            cout << "Caperucita Roja se encuentra con el Lobo en el camino largo" << endl;
        }
};

int main() {
    CaperucitaRoja caperucitaRoja("Caperucita Roja");
    Lobo lobo;
    Abuela abuela("Abuela");
    Bosque bosque;

    caperucitaRoja.caminar();
    lobo.esconderse();
    caperucitaRoja.caminar();
    lobo.enganar();
    bosque.caminoLargo();
    caperucitaRoja.caminar();
    lobo.correr();
    abuela.preguntar();
    caperucitaRoja.saludar();
    abuela.recibirComida();
    caperucitaRoja.entregarComida();
    abuela.avisar();
return 0;
}
