#include "../include/Book.h"

bool Book::addBook(std::vector<Book>& library, const std::string& title, const std::string& author, int publicationYear, const std::string& isbn) {
	//Verificar si el libro ya existe en la biblioteca
	this->title = title;
	this->author = author;
	this->publicationYear = publicationYear;
	this->isbn = isbn;
	this->status = "available";
}
