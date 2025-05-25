#include <iostream>
using namespace std;

class IMensagem {
public:
    virtual void enviar(string texto) = 0;
};

class Email : public IMensagem {
public:
    void enviar(string texto) override {
        cout << "Enviando por email: " << texto << endl;
    }
};

class Notificador {
    IMensagem* msg;
public:
    Notificador(IMensagem* m) : msg(m) {}
    void notificar(string texto) {
        msg->enviar(texto);
    }
};

int main() {
    Email email;
    Notificador n(&email);
    n.notificar("Olá, mundo!");
    return 0;
}
