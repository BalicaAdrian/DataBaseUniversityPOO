#pragma once
#include<iostream>
#include <vector>
#include"Person.h"
#include"StudentRole.h"

class ClassBook {
public:
	ClassBook(int,std::string);
	void addStudent(Person*);
	std::vector<Person*> GetStudentsBook();
	int GetGroup();
	std::string GetYear();
	Person* searchByLastName(std::string);
	Person* searchByFirstName(std::string);
	Person* searchByFullName(std::string,std::string);
	Person* searchByCNP(int);
	void addMark(Discipline*, float, int);
	void removeMark(std::string, int);
	void updateMark(std::string, float,int);
	void RemoveByCNP(int);
	int GetSizeOfBook();

	


protected:
	std::string m_Year;
	int m_Group;
	std::vector<Person*>m_StudentsBook;

};