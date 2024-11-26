#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string* title;
    std::string* author;

public:
    // Constructor explicit
    explicit Book(const std::string& titleValue, const std::string& authorValue);

    // Copy constructor
    Book(const Book& other);

    // Move constructor
    Book(Book&& other) noexcept;

    // Copy assignment operator
    Book& operator=(const Book& other);

    // Move assignment operator
    Book& operator=(Book&& other) noexcept;

    // Destructor
    ~Book();

    // Getters
    std::string getTitle() const;
    std::string getAuthor() const;

    // Setters
    void setTitle(const std::string& titleValue);
    void setAuthor(const std::string& authorValue);

    // Functie pentru afisarea detaliilor cartii
    void display() const;

    // Functii generate de compilator dezactivate
    Book() = delete; // Constructor default dezactivat
    Book& operator=(const std::string&) = delete; // Operator de atribuire cu string dezactivat
};

#endif


