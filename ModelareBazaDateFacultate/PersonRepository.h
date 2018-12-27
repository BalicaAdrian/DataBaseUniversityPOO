#pragma once
#include <iostream>
#include"Person.h"
#include "Repository.h"
class PersonRepository :
	public Repository<Person>
{
private:

public:
	Person* SearchByLastName(std::string);
	Person* SearchByFirstName(std::string);
	Person* SearchByFullName(std::string, std::string);
	Person* SearchByCNP(int);
	Person* SearchByEmail(std::string);
	std::vector<Person*>SearchByRole(int);
	PersonRepository();
	~PersonRepository();
};
