#include "Book.h"
#include "ILibrary.h"

Book::Book(std::string &author, std::string& title, int yearIssue, std::string& content) :
	_author(author), _title(_title), _yearIssue(yearIssue), _content(content) {}
const std::string &Book::getTitle()const {
	return _title;
}
const std::string &Book::getAuthor()const {
	return _author;
}
const std::string &Book::getContent() const{
	return _content;
}
int Book::getYearIssue() const{
	return _yearIssue;
}

void Book::setTitle(const std::string& title) {
	_title = title;
}
void Book::setAuthor(const std::string& author) {
	_author = author;
}
void Book::setContent(const std::string& content) {
	_content = content;
}
void Book::setYearIssue(int yearIssue) {
	_yearIssue = yearIssue;
}


