#include "Book.h"
// Constructor cu initializarea membrilor
Book::Book(const std::string& titleValue, const std::string& authorValue)
    : title(titleValue), author(authorValue) {
    std::cout << "Constructor: Book \"" << title << "\" by " << author << " initialized." << std::endl;
}
// Destructor
Book::~Book() {
    std::cout << "Destructor: Book \"" << title << "\" deallocated." << std::endl;
}
// Getters
std::string Book::getTitle() const 
 {
 return title;  
 }
std::string Book::getAuthor() const 
 { 
return author;  
 }
// Setters
void Book::setTitle(const std::string& titleValue)
 {
 title = titleValue;
 }
void Book::setAuthor(const std::string& authorValue)
 {
 author = authorValue;
 }
// Display function
void Book::display() const {
    std::cout << "Book: \"" << title << "\" by " << author << std::endl;
}


