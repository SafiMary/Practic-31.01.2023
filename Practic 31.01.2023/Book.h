#pragma once
#include "ILibrary.h"
#include "Library.h"



class Book{
public:
	Book(std::string author, std::string nameBook, size_t year, std::string content, size_t IDBOOK);
	const std::string getNameBook();
	void setName(const std::string& nameBook);
	const std::string getAuthor();
	void setAuthor(const std::string& author);
	size_t getYear();
	void setContent(const std::string content);
	const std::string getContent();
	size_t getIDBOOK();
	void setIDBOOK(size_t IDBOOK);
	~Book();
private:
	std::string _author;
	std::string _nameBook;
	size_t _year;
	std::string	_content;
	size_t _IDBOOK;

};

