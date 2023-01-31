#pragma once
#include <iostream>
#include <string>
#include <map>
#include <queue>

class ILibrary{
public:
	virtual void addBook(Book& other) = 0;
	virtual void setBook(size_t IDBOOK) = 0;
	virtual void deleteBook(size_t IDBOOK) = 0;
};

