#include <iostream>
#include <cstring>
#include "person.hpp"

// Constructor implicit
Persoana::Persoana() {
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

// Operator de atribuire (copy)
Persoana& Persoana::operator=(const Persoana& other) {
    if (this != &other) {
        // Eliberează resursele existente
        delete[] nume;

        varsta = other.varsta;
        setNume(other.nume);

        std::cout << "Operator de atribuire (copy) - Nume: " << this->nume << std::endl;
    }
    return *this;
}

// Operator de atribuire (move assignment)
Persoana& Persoana::operator=(Persoana&& other) {
    if (this != &other) {
        delete[] nume;  // Eliberează resursele existente

        nume = other.nume;
        varsta = other.varsta;

        other.nume = nullptr;

        std::cout << "Operator de atribuire (move) - Nume: " << this->nume << std::endl;
    }
    return *this;
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

// Metoda pentru afișarea detaliilor
void Persoana::afisareDetalii() const {
    std::cout << "Detalii despre persoana: Nume: " << getNume() << ", Varsta: " << getVarsta() << std::endl;
}
