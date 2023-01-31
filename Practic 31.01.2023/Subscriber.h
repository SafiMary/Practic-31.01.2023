#pragma once
#include "ILibrary.h"

class Subscriber{
public:
	Subscriber(size_t ID, std::string& nameSubsriber);
	const std::string getNameSubsriber();
	void setNameSubsriber(const std::string& nameSubsriber);
	size_t getID();
	void setID(size_t ID);
	void wantedBook();
	~Subscriber();
private:
	size_t _ID;
	std::string _nameSubsriber;
};

