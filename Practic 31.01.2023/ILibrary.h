#pragma once
//#include <iostream>
//#include <string>
//#include <map>
//#include <queue>
#include "Book.h"
#include "Subscriber.h"

class ILibrary{
public:
	virtual void addBook(const Book& book) = 0;
	virtual void modifyBook(int key) = 0;
	virtual void removeBook(int key) = 0;
	virtual void registerSubscriber(const Subscriber& sub) = 0;
	virtual ~ILibrary() {}
};

