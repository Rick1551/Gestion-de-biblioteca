#include "../include/Book.h"
//
Book::Book(const std::string& title, const std::string& author, int publicationYear, const std::string& isbn)
	: title(title), author(author), publicationYear(publicationYear), isbn(isbn), status("available") {
}

const std::string Book::getTitle() const { return this->title; }
const std::string Book::getAuthor() const { return this->author; }
int Book::getPublicationYear() const { return publicationYear; }
std::string Book::getISBN() const { return isbn; }
std::string Book::getStatus() const { return status; }

//Metodo para mostrar la informacion del libro
void Book::displayInfo() const {
	std::cout << "Titulo: " << title << "\n"
			  << "Autor: " << author << "\n"
			  << "Año de Publicación: " << publicationYear << "\n"
			  << "ISBN: " << isbn << "\n"
			  << "Estado: " << status << "\n";
}

//Metodo estatico para agregar libros a la biblioteca
bool Book::addBook(std::vector<Book>& library, const std::string& title, const std::string& author,
					int publicationYear, const std::string& isbn) {
	//Verificar si el libro ya existe en la biblioteca
	auto it = std::ranges::find_if(library, [&](const Book& book) {
		return book.getTitle() == title && book.getAuthor() == author ; 
		});

	if (it != library.end()) {
		std::cout << "El libro ya existe en la biblioteca.\n";
		return false; // El libro ya existe
	}
	else {
		library.emplace_back(title, author, publicationYear, isbn);	// Agregar el nuevo libro a la biblioteca
		std::cout << "Libro agregado exitosamente.\n";
		return true; // Libro agregado exitosamente
	}

}

//Getters
