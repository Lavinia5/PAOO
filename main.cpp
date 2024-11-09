#include "Book.h"
int main() {
    // Creare carte
    Book book1("Effective C++", "Scott Meyers");
    book1.display();

    // Urmatoarele linii vor produce erori de compilare, deoarece am dezactivat copierea și mutarea:
    // Book book2 = book1; // Eroare: constructorul de copiere este dezactivat
    // Book book3("Tempor", "necunoscut");
    // book3 = book1;       // Eroare: operatorul de copiere este dezactivat
    // Book book4 = std::move(book1); // Eroare: constructorul de mutare este dezactivat
    // Book book5("Tempor", "necunoscut");
    // book5 = std::move(book1);      // Eroare: operatorul de mutare este dezactivat

    return 0;
}

