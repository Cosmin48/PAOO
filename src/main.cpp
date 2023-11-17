#include <iostream>
#include "student.hpp"
#include "angajat.hpp"

using namespace Companie;

int main() {
   
    // Utilizare pentru clasa Student
    Companie::Student student("John Doe", 20, "Informatica");
    student.afisareDetalii();

    // Utilizare pentru clasa Angajat
    Companie::Angajat angajat("Jane Doe", 30, 5000);
    angajat.afisareDetalii();

    return 0;
}
