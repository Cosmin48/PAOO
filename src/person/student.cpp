#include <iostream>
#include <cstring>
#include "student.hpp"

namespace Companie {


   Student::Student(const char* nume, int varsta, const char* program)  : Persoana(nume, varsta), program(strdup(program)){
        // Allocate memory for the strings and copy the content
    }



    // Destructor to free allocated memory
    Student::~Student(){
        free(program);
    }

    // Exemplu de implementare pentru afisareDetalii()
    void Student::afisareDetalii() const {
        std::cout << "Student - Nume: " << nume << ", Varsta: " << varsta
                  << ", Program: " << program << std::endl;
    }

}  // namespace Companie
