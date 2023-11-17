#ifndef ANGAJAT_HPP
#define ANGAJAT_HPP

#include "person.hpp"

namespace Companie {

    class Angajat : public Persoana {
    public:
        // Constructor implicit
        Angajat();

        // Constructor parametrizat
        Angajat(const char* nume, int varsta, int salariu);

        // Destructor
        ~Angajat() override = default;

        // Copiere
        Angajat(const Angajat& other);

        // Mutare
        Angajat(Angajat&& other);

        // Operator de atribuire (copy)
        Angajat& operator=(const Angajat& other);

        // Operator de atribuire (move)
        Angajat& operator=(Angajat&& other);

        // Getter pentru salariu
        int getSalariu() const;

        // Setter pentru salariu
        void setSalariu(int salariu);

        // Afișare detalii specific pentru Angajat
        void afisareDetalii() const override;

    private:
        int salariu;
    };

}  // namespace Companie

#endif
