#include <iostream>
#include "Book.h"

int main() {
    
    Book book1("O carte faina", "Necunoscutul"); // Initializare carte folosind constructorul
    book1.display();

   
    Book book2 = book1;  // Demonstram copy constructor-ul
    book2.display();

    
    Book book3 = std::move(book1); // Demonstram move constructor-ul
    book3.display();

    book2.setTitle("Strainul"); // Modificam book2 pentru a observa efectul modificarii pe o copie
    book2.setAuthor("Albert Camus");
    book2.display();

    return 0;
}


