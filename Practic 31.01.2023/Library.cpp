#include "Library.h"

Library() {}

void addBook(Book& other) override {
	std::cout << "�������� ����� ����� " << std::endl;
	_bookcollection.emplace(_IDBOOK, other);
	
}

void deleteBook(size_t IDBOOK)override {
	std::cout << "������� ����� ����� " << std::endl;
	for (size_t i = 0; i < _bookcollection.size(); i++) {
		if (_bookcollection[i] == IDBOOK){
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
				std::cout << "����� �� �������, ������������ ������ " << std::endl;
				s.pop();
			}

	}
