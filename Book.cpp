#include "Book.h"


// Constructor cu initializarea membrilor
Book::Book(const std::string& titleValue, const std::string& authorValue)
    : title(new std::string(titleValue)), author(new std::string(authorValue)) {
    std::cout << "Constructor: Book \"" << *title << "\" by " << *author << " initialized." << std::endl;
}

// Copy constructor (deep copy) - Respecta Item 12
// Copiaza toate partile obiectului prin alocare de memorie noua și copierea valorilor membrilor
Book::Book(const Book& other)
    : title(new std::string(*other.title)), author(new std::string(*other.author)) {
    std::cout << "Copy constructor: Book \"" << *title << "\" copied." << std::endl;
}

// Move constructor (transferul ownership-ului)
Book::Book(Book&& other) noexcept : title(other.title), author(other.author) {
    other.title = nullptr;
    other.author = nullptr;
    std::cout << "Move constructor: Book moved." << std::endl;
}

// Copy assignment operator 
Book& Book::operator=(const Book& other) {
    // Respecta Item 11: Verificare pentru atribuire la sine (self-assignment)
    if (this == &other) {
        return *this; // Daca este acelasi obiect, returnam direct *this
    }

    // Eliberam memoria existenta pentru a preveni memory leaks
    delete title;
    delete author;

    // Respecta Item 12: Copierea tuturor partilor obiectului
    title = new std::string(*other.title);
    author = new std::string(*other.author);

    // Respecta Item 10: Returnam referinta la *this pentru a permite apeluri în lant
    std::cout << "Copy assignment operator: Book \"" << *title << "\" assigned." << std::endl;
    return *this;
}

// Move assignment operator - Respecta Item 10 și 11
Book& Book::operator=(Book&& other) noexcept {
    // Respecta Item 11: Verificare pentru atribuire la sine (self-assignment)
    if (this == &other) {
        return *this;
    }

    // Eliberam memoria existenta pentru a preveni memory leaks
    delete title;
    delete author;

    // Respecta Item 12: Transferam ownership-ul resurselor
    title = other.title;
    author = other.author;

    // Golim resursele din obiectul sursă pentru a evita problemele de dangling pointer
    other.title = nullptr;
    other.author = nullptr;

    // Respecta Item 10: Returnam referinta la *this pentru a permite apeluri în lant
    std::cout << "Move assignment operator: Book moved and assigned." << std::endl;
    return *this;
}

// Destructor (eliberare memorie)
Book::~Book() {
    delete title;
    delete author;
    std::cout << "Destructor: Book deallocated." << std::endl;
}

// Getters
std::string Book::getTitle() const { return *title; }
std::string Book::getAuthor() const { return *author; }

// Setters
void Book::setTitle(const std::string& titleValue) { *title = titleValue; }
void Book::setAuthor(const std::string& authorValue) { *author = authorValue; }

// Afisare detalii carte
void Book::display() const {
    std::cout << "Book: \"" << *title << "\" by " << *author << std::endl;
}


