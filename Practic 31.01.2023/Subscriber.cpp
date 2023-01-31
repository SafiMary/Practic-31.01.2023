#include "Subscriber.h"

Subscriber::Subscriber(size_t ID, std::string& nameSubsriber): _ID(ID), _nameSubsriber(nameSubsriber){}
const std::string Subscriber::getNameSubsriber() {
	return _nameSubsriber;
}
void Subscriber::setNameSubsriber(const std::string& nameSubsriber) {
	_nameSubsriber = nameSubsriber;
}
size_t Subscriber::getID() {
	return _ID;
}
void Subscriber::setID(size_t ID) {
	_ID = ID;
}

Subscriber::~Subscriber(){}
void Subscriber::wantedBook() {
	return _wantedBookName;
}