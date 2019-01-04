#include "pch.h"
#include "ClassBookRepository.h"


ClassBook * ClassBookRepository::SearchByGroupandYear(int group, std::string year)
{
	for (int i = 0; i < m_Entities.size(); i++) {
		if (m_Entities[i]->GetGroup() == group && m_Entities[i]->GetYear() == year) {
			return m_Entities[i];
		}
	}
	throw std::runtime_error("Classbook for this group and year wasn;t found!");
}

Person * ClassBookRepository::searchbyFullNameAndYear(std::string lastname, std::string firstname, std::string yearofstudy)
{
	Person* Newperson = NULL;
	for (int i = 0; i < m_Entities.size(); i++) {
		try {
			Newperson = m_Entities[i]->searchByFullName(lastname, firstname);
		}
		catch (std::runtime_error const e) {}
		if (Newperson != NULL && m_Entities[i]->GetYear() == yearofstudy)
			return Newperson;
	}
	throw std::runtime_error("Person wasn't found!");
}

Person * ClassBookRepository::SearchByCNPAndYear(int cnp, std::string yearofstudy)
{
	Person* Newperson = NULL;
	for (int i = 0; i < m_Entities.size(); i++) {
		try {
			Newperson = m_Entities[i]->searchByCNP(cnp);
		}
		catch (std::runtime_error const e) {}
		if (Newperson != NULL && m_Entities[i]->GetYear() == yearofstudy)
			return Newperson;
	}
	throw std::runtime_error("Person wasn't found!");
}

ClassBookRepository::ClassBookRepository()
{
}


ClassBookRepository::~ClassBookRepository()
{
}
