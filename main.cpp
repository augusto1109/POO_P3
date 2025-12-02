#include <iostream>
#include "rectangle.hpp"

using namespace std;

int main() {
    int altura, largura;

    while (true) {

        while (true) {
            cout << "1. Digite a altura do retangulo (numero positivo): ";
            cin >> altura;
            if (altura > 0) {
                break;
            }
            cout << "Altura invalida. Deve ser um numero positivo." << endl;
        }
        
        while (true) {
            cout << "2. Digite a largura do retangulo (numero positivo): ";
            cin >> largura;
            if (largura > 0) {
                break;
            }
            cout << "Largura invalida. Deve ser um numero positivo." << endl;
        }

        Rectangle retangulo(altura, largura);
        int resultadoArea = retangulo.getArea();
        int resultadoPerimetro = retangulo.getPerimetro();

        retangulo.display();

        char continuar;
        cout << "\nDeseja criar outro retangulo? (s/n): ";
        cin >> continuar;
        
        if (continuar != 's' && continuar != 'S') {
            cout << "Programa finalizado." << endl;
            break;
        }
        
        cout << "\n--- Informe as novas dimensoes ---\n" << endl;
    }
    return 0;
}