#include <iostream>
using namespace std;

class Forma {
public:
    virtual void desenhar() = 0;
};

class Circulo : public Forma {
public:
    void desenhar() override {
        cout << "Desenhando círculo\n";
    }
};

class Quadrado : public Forma {
public:
    void desenhar() override {
        cout << "Desenhando quadrado\n";
    }
};

void desenharForma(Forma* f) {
    f->desenhar();
}

int main() {
    Circulo c;
    Quadrado q;
    desenharForma(&c);
    desenharForma(&q);
    return 0;
}
