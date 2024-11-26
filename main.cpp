#include "Book.h"

#include <iostream>

int main() {
    // Cream o carte utilizand constructorul explicit
    Book book1("1984", "George Orwell");
    book1.display();

    // Utilizam copy constructorul pentru a crea o copie
    Book book2 = book1;
    book2.display();

    // Modificam informatiile în cartea copiata
    book2.setTitle("Animal Farm");
    book2.display();

    // Testam operatorul de atribuire (copiere)
    Book book3("Default Title", "Default Author");
    book3 = book1;
    book3.display();

    // Testam operatorul de atribuire (mutare)
    Book book4("Temporary Title", "Temporary Author");
    book4 = std::move(book2);
    book4.display();

    // Testam atribuirea la sine (self-assignment)
    book1 = book1;

    // Destructorii sunt apelati automat la sfarsitul functiei `main`.


    return 0;
}

