#include <iostream>
#include <string>
#ifndef BOOK_H
#define BOOK_H
class Book {
 private:
    std::string* title;
    std::string* author;

 public:
    Book(const std::string& title, const std::string& author); // Constructor

    Book(const Book& other);  // Copy constructor

    Book(Book&& other) noexcept; // Move constructor

    ~Book(); // Destructor

    std::string getTitle() const;    // Getters
    std::string getAuthor() const;

    void setTitle(const std::string& title);   // Setters
    void setAuthor(const std::string& author);

    void display() const;     // Display book details
};

#endif // BOOK_H

