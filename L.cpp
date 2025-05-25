#include <iostream>
using namespace std;

class Ave {
public:
    virtual void voar() {
        cout << "A ave está voando\n";
    }
};

class Andorinha : public Ave {
public:
    void voar() override {
        cout << "A andorinha voa rápido\n";
    }
};

void fazerAveVoar(Ave* a) {
    a->voar();
}

int main() {
    Andorinha a;
    fazerAveVoar(&a);  // OK!
    return 0;
}
