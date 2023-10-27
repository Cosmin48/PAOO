#include <iostream>
#include <cstring>
#include "tutorial.hpp"

// Constructor implicit
Persoana::Persoana() : nume(nullptr), varsta(0) {
    nume = new char[strlen("Necunoscut") + 1];
    strcpy(nume, "Necunoscut");
    std::cout << "Constructor implicit - Nume: " << nume << std::endl;
}

// Constructor parametrizat
Persoana::Persoana(const char* nume, int varsta) : nume(nullptr), varsta(varsta) {
    setNume(nume);
    std::cout << "Constructor parametrizat - Nume: " << this->nume << std::endl;
}

// Destructor
Persoana::~Persoana() {
    std::cout << "Destructor - Nume: " << nume << std::endl;
    delete[] nume;
}

// Constructor de copiere
Persoana::Persoana(const Persoana& other) : nume(nullptr), varsta(other.varsta) {
    setNume(other.nume);
    std::cout << "Constructor de copiere - Nume: " << this->nume << std::endl;
}

// Constructor de mutare
Persoana::Persoana(Persoana&& other) : nume(other.nume), varsta(other.varsta) {
    other.nume = nullptr;
    std::cout << "Constructor de mutare - Nume: " << this->nume << std::endl;
}

// Getter pentru nume
const char* Persoana::getNume() const {
    return nume;
}

// Getter pentru varsta
int Persoana::getVarsta() const {
    return varsta;
}

// Setter pentru nume
void Persoana::setNume(const char* nume) {
    delete[] this->nume;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

// Setter pentru varsta
void Persoana::setVarsta(int varsta) {
    this->varsta = varsta;
}
