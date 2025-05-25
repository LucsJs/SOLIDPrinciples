#include <iostream>
#include <string>
using namespace std;

class Aluno {
    string nome;
public:
    Aluno(string n) : nome(n) {}
    string getNome() { return nome; }
};

class AlunoPrinter {
public:
    void imprimir(const Aluno& a) {
        cout << "Nome do aluno: " << a.getNome() << endl;
    }
};

int main() {
    Aluno a("Carlos");
    AlunoPrinter p;
    p.imprimir(a);
    return 0;
}
