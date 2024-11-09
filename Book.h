#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book {
public:
// Constructor cu initializarea membrilor
    Book(const std::string& titleValue, const std::string& authorValue);
// Destructor
    ~Book();
// Getters
    std::string getTitle() const;
    std::string getAuthor() const;
// Setters
    void setTitle(const std::string& titleValue);
    void setAuthor(const std::string& authorValue);
// Display function
    void display() const;

private:
    std::string title;
    std::string author;
// Dezactivarea constructorului de copiere si a operatorului de copiere
    Book(const Book&) = delete;
    Book& operator=(const Book&) = delete;
// Dezactivarea constructorului de mutare si a operatorului de mutare
    Book(Book&&) = delete;
    Book& operator=(Book&&) = delete;
};

#endif // BOOK_H

