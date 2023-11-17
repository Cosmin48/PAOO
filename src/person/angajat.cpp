#include <iostream>
#include "angajat.hpp"

namespace Companie {

    Angajat::Angajat(const char* nume, int varsta, int salariu)  : Persoana(nume, varsta), salariu(salariu){
        // Allocate memory for the strings and copy the content
    }


    // Exemplu de implementare pentru afisareDetalii()
    void Angajat::afisareDetalii() const {
        std::cout << "Angajat - Nume: " << getNume() << ", Varsta: " << getVarsta()
                  << ", Salariu: " << salariu << std::endl;
    }

}  // namespace Companie
