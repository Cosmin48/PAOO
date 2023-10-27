#include <iostream>
#include <string>
#include "tutorial.hpp"


int main() {
    // Constructor implicit
    Persoana persoanaImplicita;

    // Constructor parametrizat
    Persoana persoana("Stroiescu Cosmin-Ilie", 22);

    // Afișare starea lui persoana înainte de mutare
    std::cout << "Stare inainte de mutare:" << std::endl;
    std::cout << "Nume in persoana: " << persoana.getNume() << std::endl;
    std::cout << "Varsta in persoana: " << persoana.getVarsta() << " ani" << std::endl;

    // Copy Constructor
    Persoana altaPersoana = persoana;

    // Move Constructor
    Persoana altaPersoanaMutare = std::move(persoana);  // Folosim std::move pentru a specifica o mutare

    // Afișare starea lui persoana după mutare
    std::cout << "Stare dupa mutare:" << std::endl;
    std::cout << "Nume in altaPersoanaMutare (mutare): " << altaPersoanaMutare.getNume() << std::endl;

    return 0;
}
