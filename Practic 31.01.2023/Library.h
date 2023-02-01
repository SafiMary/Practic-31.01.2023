#pragma once
#include "ILibrary.h"
#include <string>
#include <map>
#include <queue>
//#include "Book.h"
//#include "Subscriber.h"

class Library: public ILibrary {
public:
	Library(const std::string& name);
	void addBook(const Book& book)override;
	void modifyBook(int key, const std::string& newName) override;
	void pop()override;
	void removeBook(int key) override;
	void registerSubscriber(const Subscriber& sub) override;

private:
	std::string _name;
	std::map<int, Book> _books;
	int _idCounterBooks;//можно не хранить, а брать из мапы последний элемент
	std::queue<Subscriber> _subs;
	
};

