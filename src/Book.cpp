#include "Book.h"

Book::Book(const std::string& titleValue, const std::string& authorValue)
    : title(new std::string(titleValue)), author(new std::string(authorValue)) 
{
    std::cout << "Constructor: Book \"" << *title << "\" by " << *author << " initialized." << std::endl;
} // Constructor cu initializarea membrilor

Book::Book(const Book& other)
    : title(new std::string(*other.title)), author(new std::string(*other.author)) 
{
    std::cout << "Copy constructor: Book \"" << *title << "\" copied." << std::endl;
// Copy constructor 
} 
 
Book::Book(Book&& other) noexcept : title(other.title), author(other.author)
 {
    other.title = nullptr;
    other.author = nullptr;
    std::cout << "Move constructor: Book moved." << std::endl;
// Move constructor 
}

Book::~Book() {
    delete title;
    delete author;
    std::cout << "Destructor: Book deallocated." << std::endl;
// Destructor (eliberare memorie)
}

std::string Book::getTitle() const 
{ 
return *title; 
}
std::string Book::getAuthor() const 
{ 
return *author;
 }

void Book::setTitle(const std::string& titleValue) 
{ 
*title = titleValue; 
}

void Book::setAuthor(const std::string& authorValue)
 { 
*author = authorValue; 
}

void Book::display() const {
    std::cout << "Book: \"" << *title << "\" by " << *author << std::endl;
}

