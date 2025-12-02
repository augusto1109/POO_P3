#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
using namespace std;

class Rectangle {
private:
    int altura;
    int largura;

public:
    Rectangle(int a, int l) : altura(a), largura(l) {}

    int getArea() const {
        return altura * largura;
    }

    int getPerimetro() const {
        return 2 * (altura + largura);
    }

    void display() const {
        cout << "DADOS DO RETANGULO:" << endl;
        cout << "- Altura: " << altura << endl;
        cout << "- Largura: " << largura << endl;
        cout << "- Area: " << getArea() << endl;
        cout << "- Perimetro: " << getPerimetro() << endl;
        cout << endl;
        cout << "Representacao do Retangulo:" << endl;
        for (int i = 0; i < altura; ++i) {
            for (int j = 0; j < largura; ++j) {
                cout << "◻️ ";
            }
            cout << endl;
        }
    }
};

#endif