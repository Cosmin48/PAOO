# pragma once


class Persoana {
protected:
    char* nume;
    int varsta;

public:
    // Constructor implicit
    Persoana();

    // Constructor parametrizat
    Persoana(const char* nume, int varsta);

    // Destructor
    virtual ~Persoana();  // Adaugăm virtual pentru a permite funcționarea corectă a polimorfismului

    // Constructor de copiere
    Persoana(const Persoana& other);

    // Constructor de mutare
    Persoana(Persoana&& other);

    // Operator de atribuire (copy)
    Persoana& operator=(const Persoana& other);

    // Operator de atribuire (move)
    Persoana& operator=(Persoana&& other);

    // Getter pentru nume
    const char* getNume() const;

    // Getter pentru varsta
    int getVarsta() const;

    // Setter pentru nume
    void setNume(const char* nume);

    // Setter pentru varsta
    void setVarsta(int varsta);

    // Funcție virtuală pură pentru afișarea detaliilor
    virtual void afisareDetalii() const = 0;
};
