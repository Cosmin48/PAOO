#ifndef TUTORIAL_HPP
#define TUTORIAL_HPP

class Persoana {
private:
    char* nume;
    int varsta;

public:
    // Constructor implicit
    Persoana();

    // Constructor parametrizat
    Persoana(const char* nume, int varsta);

    // Destructor
    ~Persoana();

    // Constructor de copiere
    Persoana(const Persoana& other);

    // Constructor de mutare
    Persoana(Persoana&& other);

    // Getter pentru nume
    const char* getNume() const;

    int getVarsta() const;

    // Setter pentru nume
    void setNume(const char* nume);

    void setVarsta(int varsta);
};

#endif
