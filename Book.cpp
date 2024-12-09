
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
public:
    // Constructor care inițializează direct membrele
    // (Item 13: folosim direct std::string, fără alocări dinamice)
    explicit Book(const std::string& titleValue, const std::string& authorValue)
        : title(titleValue), author(authorValue) {
        std::cout << "Constructor: Book \"" << title << "\" by " << author << " initialized." << std::endl;
    }

    // Copy constructor (Item 14: copiile sunt gestionate automat, std::string face deep copy)
    Book(const Book& other) = default;

    // Move constructor
    Book(Book&& other) noexcept = default;

    // Copy assignment operator
    // (Item 10 și 11 au fost deja aplicate, iar acum folosind std::string, comportamentul este corect implicit)
    Book& operator=(const Book& other) = default;

    // Move assignment operator
    Book& operator=(Book&& other) noexcept = default;

    // Destructor (nu mai avem nevoie să eliberam manual memoria)
    ~Book() {
        std::cout << "Destructor: Book \"" << title << "\" deallocated." << std::endl;
    }

    // Getters
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }

    // Setters
    void setTitle(const std::string& titleValue) { title = titleValue; }
    void setAuthor(const std::string& authorValue) { author = authorValue; }

    // Afișare detalii
    void display() const {
        std::cout << "Book: \"" << title << "\" by " << author << std::endl;
    }

private:
    // Item 13: în loc de pointeri si alocare dinamica, folosim obiecte std::string
    // care gestioneaza resursele intern. Astfel, nu mai avem nevoie de destructor personalizat.
    std::string title;
    std::string author;
};

#endif // BOOK_H
>>>>>>>  Tema 4

