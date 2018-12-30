#include"pch.h"
#include<iostream>
#include "ClassBook.h"
#include"StudentRole.h"
#include <vector>

ClassBook::ClassBook(int group, std::string StudyYear)
{
	m_Group = group;
	m_Year = StudyYear;

}

void ClassBook::addStudent(Person * person)
{
	StudentRole* s = dynamic_cast<StudentRole*>(person->searchRole(1));
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++)
	{
		if ((*it)->GetCNP() == person->GetCNP())
			throw std::runtime_error("This person already exist!");
	}
	if (s->GetGroup() != m_Group)
		throw std::runtime_error("This student isn;t from this group of study!");
	try {
		person->GetRole(1);
	}
	catch (std::runtime_error const e) {
		throw std::runtime_error("He is not a student!");
	}

	m_StudentsBook.push_back(person);
}

std::vector<Person*> ClassBook::GetStudentsBook()
{
	std::vector<Person*> persons;
	for (int i = 0; i <= m_StudentsBook.size(); i++)
		persons.push_back(m_StudentsBook[i]);
	return persons;
}

int ClassBook::GetGroup()
{
	return m_Group;
}

std::string ClassBook::GetYear()
{
	return m_Year;
}

Person * ClassBook::searchByLastName(std::string lastname)
{
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++)
		if ((*it)->GetLastName() == lastname)
			return *it;
	throw std::runtime_error("Student with this lastname couldn't be found!");
	
}

Person * ClassBook::searchByFirstName(std::string firstname)
{
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++)
		if ((*it)->GetFirstName() == firstname)
			return *it;
	throw std::runtime_error("Student with this firstname couldn't be found!");
}

Person * ClassBook::searchByFullName(std::string lastname, std::string firstname)
{
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++)
		if ((*it)->GetLastName() == lastname && (*it)->GetFirstName()==firstname)
			return *it;
	throw std::runtime_error("Student with this name couldn't be found!");
}

Person * ClassBook::searchByCNP(int cnp)
{
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++)
		if ((*it)->GetCNP()==cnp)
			return *it;
	throw std::runtime_error("Student with this CNP couldn't be found!");
}

void ClassBook::addMark(Discipline * discipline , float mark, int cnp)
{
	StudentRole* student=NULL;
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++)
	{
		if ((*it)->GetCNP() == cnp)
			student = dynamic_cast<StudentRole*>((*it)->searchRole(1)); {
			break; }

	}
	student->addMark(mark, discipline);
}

void ClassBook::removeMark(std::string discipline, int cnp)
{
	StudentRole* student=NULL;
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++) {
		if ((*it)->GetCNP() == cnp)
			student = dynamic_cast<StudentRole*>((*it)->searchRole(1)); {
			break; }

	}
	student->removeMark(discipline);
}

void ClassBook::updateMark(std::string discipline ,float newmark, int cnp)
{
	StudentRole* student=NULL;
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++) {
		if ((*it)->GetCNP() == cnp)
			student = dynamic_cast<StudentRole*>((*it)->searchRole(1)); {
			break; }

	}
	student->updateMark(discipline, newmark);
}

void ClassBook::RemoveByCNP(int cnp)
{
	int find = 0;
	std::vector<Person*>::iterator it;
	for (it = m_StudentsBook.begin(); it != m_StudentsBook.end(); it++) {
		if ((*it)->GetCNP() == cnp) {
			find = 1;
			m_StudentsBook.erase(it);
			break;
		}
	}
		if (find == 0)
			throw std::runtime_error(" THis student's does't exit!");
}

int ClassBook::GetSizeOfBook()
{
	return m_StudentsBook.size();
}

