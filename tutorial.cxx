#include <iostream>
#include <string>

class Persoana {
private:
    std::string nume;
    int varsta;

public:
    // Constructor implicit
    Persoana() {
        nume = "Necunoscut";
        varsta = 0;
        std::cout << "Constructor implicit" << std::endl;
    }
    // Constructor parametrizat
    Persoana(std::string nume, int varsta) {
        this->nume = nume;
        this->varsta = varsta;
        std::cout << "Constructor parametrizat" << std::endl;
    }

    // Getteri
    std::string getNume() {
        return nume;
    }

    int getVarsta() {
        return varsta;
    }

    // Setteri
    void setNume(std::string nume) {
        this->nume = nume;
    }

    void setVarsta(int varsta) {
        this->varsta = varsta;
    }
};

int main() {
    // Constructor implicit
    Persoana persoanaImplicita;

    Persoana persoana("Stroiescu Cosmin-Ilie", 22); //creare de obiect.

    std::cout << "Nume: " << persoana.getNume() << std::endl;
    std::cout << "Varsta: " << persoana.getVarsta() << " ani" << std::endl;

    return 0;
}
