#include "Library.h"
#include <string>

Library::Library(const std::string& name) : _name(name) {}


void registerSubscriber() ;

void Library::addBook(const Book& book) {
	_books.insert({ _idCounterBooks, book });
	_idCounterBooks++;
}

void Library::modifyBook(int key, const std::string& newName) {
	auto it = _books.find(key);
	it->second.setAutor(newName);

void Library::removeBook(size_t IDBOOK) {
	std::cout << "”далили новую книгу " << std::endl;
	for (size_t i = 0; i < _bookcollection.size(); i++) {
		if (_bookcollection[i].getID() == IDBOOK) {
			_bookcollection.erase(_bookcollection.begin() + i);
	}
	void Library::pop() {
		Subscriber& sub = _subs.front();
		std::string subWantedBook = sub.getBookWanted();
		for(auto it = _books.begin(); it != _books.end();it++){
			if (it->second.getTitle() == subWantedBook) {
				_books.erase(it);
				_sub.pop();
				return;
			}
			_sub.pop();
			/*for (size_t i = 0; i < _bookcollection.size(); i++) {
				if (_bookcollection[i].getNameBook() == other.wantedBook()) {
					_bookcollection.erase(_bookcollection.begin() + i);
						s.pop();
						return;
				}
				std::cout << " нига не найдена, пользователь удален " << std::endl;
				s.pop();
			}  */

	}
