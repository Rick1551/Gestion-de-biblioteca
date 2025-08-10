#pragma once
#include <string>
#include <cstring> // For strlen and strcpy
#include <iostream>
#include <vector>
#include <algorithm>	//Para std::ranges::find_if

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
	~Book();


	const char* getTitle() const;
	const char* getAuthor() const;
	int getPublicationYear() const;
	std::string getISBN() const;
	std::string getStatus() const;

	bool addBook(std::vector<Book>& library, const std::string& title, const std::string& author, int publicationYear, const std::string& isbn);
	void borrowBook();
	void returnBook();
};

