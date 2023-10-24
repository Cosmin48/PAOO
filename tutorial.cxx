#include <iostream>
#include <string>

class Persoana {
private:
    std::string nume;
    int varsta;

public:
    // Constructor
    Persoana(std::string nume, int varsta) {
        this->nume = nume;
        this->varsta = varsta;
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
    Persoana persoana("Stroiescu Cosmin-Ilie", 22);

    std::cout << "Nume: " << persoana.getNume() << std::endl;
    std::cout << "Varsta: " << persoana.getVarsta() << " ani" << std::endl;

    return 0;
}
