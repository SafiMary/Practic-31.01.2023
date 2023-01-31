#include "Library.h"

Library() {}

void addBook(Book& other) override {
	std::cout << "Добавили новую книгу " << std::endl;
	_bookcollection.push_back(other);
	
}

void deleteBook(size_t IDBOOK)override {
	std::cout << "Удалили новую книгу " << std::endl;
	for (size_t i = 0; i < _bookcollection.size(); i++) {
		if (_bookcollection[i].getID() == IDBOOK) {
			_bookcollection.erase(_bookcollection.begin() + i);
	}
	void popSubscriber() {
		Subscriber& other = s.front();
			for (size_t i = 0; i < _bookcollection.size(); i++) {
				if (_bookcollection[i].getNameBook() == other.wantedBook()) {
					_bookcollection.erase(_bookcollection.begin() + i);
						s.pop();
						return;
				}
				std::cout << "Книга не найдена, пользователь удален " << std::endl;
				s.pop();
			}  

	}
