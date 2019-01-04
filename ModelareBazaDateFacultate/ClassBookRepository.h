#pragma once
#include"ClassBook.h"
#include "Repository.h"
class ClassBookRepository:public Repository<ClassBook>
{
public:
	ClassBook* SearchByGroupandYear(int, std::string);
	Person* searchbyFullNameAndYear(std::string, std::string, std::string);
	Person* SearchByCNPAndYear(int, std::string);
	ClassBookRepository();
	~ClassBookRepository();
};

