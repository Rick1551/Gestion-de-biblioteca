#pragma once
#include <string>

class Borrow {

private:
	std::string bookTitle;
	std::string userID;
	std::string borrowDate; // Format: YYYY-MM-DD
	std::string returnDate; // Format: YYYY-MM-DD

public:
	Borrow(const std::string& bookTitle, const std::string& userID, const std::string& borrowDate, const std::string& returnDate);
	~Borrow();
	const std::string& getBookTitle() const;
	const std::string& getUserID() const;
	const std::string& getBorrowDate() const;
	const std::string& getReturnDate() const;

	void setBorrowDate(const std::string& borrowDate);
	void setUserID(const std::string& userID);
	void setBookTitle(const std::string& bookTitle);
	void setReturnDate(const std::string& returnDate);
};

