#include "Book.h"
#include "ILibrary.h"

Book::Book(std::string author, std::string nameBook, size_t year, std::string content, size_t IDBOOK) :
	_author(author), _nameBook(_nameBook), _year(year), _content(content),_IDBOOK(IDBOOK) {}
const std::string Book::getNameBook() {
	return _nameBook;
}
void Book::setName(const std::string& nameBook) {
	_nameBook = nameBook;
}
const std::string Book::getAuthor() {
	return _author;
}
void Book::setAuthor(const std::string& author) {
	_author = author;
}
size_t Book::getYear() {
	return _year;
}
void Book::setContent(const std::string content) {
	_content = content;
}
const std::string Book::getContent() {
	return _content;
}
size_t Book::getIDBOOK() {
	return _IDBOOK;
}
void Book::setIDBOOK(size_t IDBOOK) {
	_IDBOOK = IDBOOK;
}

Book:: ~Book() {}
