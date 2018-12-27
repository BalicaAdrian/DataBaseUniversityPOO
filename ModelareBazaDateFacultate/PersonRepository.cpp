#include"pch.h"
#include "PersonRepository.h"



Person * PersonRepository::SearchByLastName(std::string LastName)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetLastName() == LastName)
			return m_Entities[i];
	throw std::runtime_error("Last name couldn't be found!");
	
}

Person * PersonRepository::SearchByFirstName(std::string FirstName)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetFirstName() == FirstName)
			return m_Entities[i];
	throw std::runtime_error("First name couldn't be found!");
}

Person * PersonRepository::SearchByFullName(std::string LastName, std::string FirstName)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetLastName() == LastName && m_Entities[i]->GetFirstName() == FirstName)
			return m_Entities[i];
	throw std::runtime_error("This name couldn't be found!");
}
Person * PersonRepository::SearchByCNP(int CNP)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetCNP() == CNP)
			return m_Entities[i];
	throw std::runtime_error("This CNP doesn't exist!");
}
Person * PersonRepository::SearchByEmail(std::string Email)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetEmail() == Email)
			return m_Entities[i];
	throw std::runtime_error("This email couldn't be found!");
}
std::vector<Person*> PersonRepository::SearchByRole(int Role)
{
	std::vector<Person*> Persons;
	for (int i = 0; i < m_Entities.size(); i++) {
		try {
			if (m_Entities[i]->GetRole(Role))
				Persons.push_back(m_Entities[i]);
		}
		catch (std::runtime_error) {}
	}
	if (Persons.size() != 0)
		return Persons;
	
	throw std::runtime_error("Noone has this role!");
	
}
PersonRepository::PersonRepository()
{
}


PersonRepository::~PersonRepository()
{
}
