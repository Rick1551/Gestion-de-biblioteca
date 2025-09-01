#pragma once
#include <string>
#include <cstring> // For strlen and strcpy
#include <iostream>
#include <vector>
#include <algorithm>	//Para std::ranges::find_if
#include <ranges>	//Para std::ranges::find_if

class Book {

private:
	std::string title;
	std::string author;
	int publicationYear;
	std::string isbn;
	std::string status; // "available" or "borrowed"

public:
	//Constructor and Destructor
	Book(const std::string& title, const std::string& author, int publicationYear, const std::string& isbn);
	//~Book();

	// Getters
	const std::string getTitle() const;
	const std::string getAuthor() const;
	int getPublicationYear() const;
	std::string getISBN() const;
	std::string getStatus() const;

	// Setters

	// Metodo estatico para agregar libros a la biblioteca
	static bool addBook(std::vector<Book>& library, const std::string& title,
				const std::string& author, int publicationYear, const std::string& isbn);

	//Metodo para mostrar la informacion del libro
	void displayInfo() const;
	void borrowBook();
	void returnBook();
};

