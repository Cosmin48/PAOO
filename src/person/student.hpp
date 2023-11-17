
#include "person.hpp"

namespace Companie {

    class Student : public Persoana {
    protected:
        char* program;

    public:
        // Constructor implicit
        Student();

        // Constructor parametrizat
        Student(const char* nume, int varsta, const char* program);

        // Destructor
        ~Student() override;

        // Copiere
        Student(const Student& other);

        // Mutare
        Student(Student&& other);

        // Operator de atribuire (copy)
        Student& operator=(const Student& other);

        // Operator de atribuire (move)
        Student& operator=(Student&& other);

        // Getter pentru program
        const char* getProgram() const;

        // Setter pentru program
        void setProgram(const char* program);

        // Afișare detalii specific pentru Student
        void afisareDetalii() const override;
    };

}  // namespace Companie
