#pragma once
#include <string>

class Users {

private:
	char* name;
	char* userID;
	std::string historyOfBorrowedBooks;
	std::string contactInfo;

public:
	//Constructor and Destructor
	Users(const char* name, const char* userID, const std::string& contactInfo);
	~Users();
	const char* getName() const;
	const char* getUserID() const;
	std::string getHistoryOfBorrowedBooks() const;
	std::string getContactInfo() const;

	void setName(const char* name);
	void setUserID(const char* userID);
	void setContactInfo(const std::string& contactInfo);
	void addToHistory(const std::string& bookTitle);

	void borrowBook(const std::string& bookTitle);
	void returnBook(const std::string& bookTitle);
};

