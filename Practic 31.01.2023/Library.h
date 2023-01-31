#pragma once
#include "ILibrary.h"
#include "Book.h"
#include "Subscriber.h"

class Library: public ILibrary {
public:
	Library();
	void addBook(Book& other) override;
	void deleteBook(size_t IDBOOK)override;
	void popSubscriber();

private:
	std::queue<Subscriber> s;
	std::vector<Book> _bookcollection;
};

