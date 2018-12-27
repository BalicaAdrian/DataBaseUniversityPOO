#include <iostream>
#include "pch.h"
#include <string>
#include "Person.h"
#include "Role.h"
#include "StudentRole.h"
#include"TeacherRole.h"

Person::Person (std::string FirstName, std::string LastName, int CNP, std::string Email)
{
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_CNP = CNP;
	m_Email = Email;
}

Person::Person(std::string FirstName , std::string LastName, int CNP, std::string role, std::string Email)
{
	m_CNP = CNP;
	m_Email = Email;
	m_FirstName = FirstName;
	m_LastName = LastName;
	if (role == "student") {
		m_Roles.push_back(new StudentRole);

	}
	if (role == "teacher") {
		m_Roles.push_back(new TeacherRole);
	}
}

Person::Person()
{
}

void Person::SetFirstName(const std::string & FirstName)
{
	m_FirstName = FirstName;
}

void Person::SetLastName(const std::string & LastName)
{
	m_LastName = LastName;
}

void Person::SetEmail(const std::string & Email)
{
	m_Email = Email;
}

std::string Person::GetFirstName()
{
	return m_FirstName;
}

std::string Person::GetLastName()
{
	return m_LastName;
}

std::string Person::GetEmail()
{
	return m_Email;
}

int Person::GetCNP()
{
	return m_CNP;
}

void Person::AddRole(Role * Role)
{
	m_Roles.push_back(Role);

}

Role::TypeRole Person::GetRole(int Role)
{
	for (int i = 0; i < m_Roles.size(); i++)
	{
		if (Role == m_Roles[i]->GetMyType())
			return m_Roles[i]->GetMyType();
	}
	throw std::runtime_error("This person haven't this role!");

}
	







std::istream & operator>>(std::istream & stream, Person& OnePerson)
{
	char c;
	std::cout << "Dati primul nume: ";
	stream >> OnePerson.m_FirstName;
	std::cout << "Dati al doilea nume: ";
	stream >> OnePerson.m_LastName;
	std::cout << "CNP: ";
	stream >> OnePerson.m_CNP;
	std::cout << "Dati Email: ";
	stream >> OnePerson.m_Email;
	for (int i = 0; i < OnePerson.m_Roles.size(); i++)
		if (OnePerson.m_Roles[i]->GetMyType() == Role::STUDENT_ROLE)
		{
			StudentRole * aux = dynamic_cast<StudentRole*>(OnePerson.m_Roles[i]);
			std::cout<< "Dati Grupa:";
			int group;
			stream >> group;
			aux->SetGroup(group);
		}
			return stream;
}

std::ostream & operator<<(std::ostream & stream, Person & OnePerson)
{
	stream << "\n Numele:" << OnePerson.m_FirstName << " " << OnePerson.m_LastName << "\n CNP:" << OnePerson.m_CNP << "\n Email:" << OnePerson.m_Email << "\n";
	for (int i = 0; i < OnePerson.m_Roles.size(); i++)
		if (OnePerson.m_Roles[i]->GetMyType() == Role::STUDENT_ROLE)
		{
			StudentRole * aux = dynamic_cast<StudentRole*>(OnePerson.m_Roles[i]);
			stream << "Grupa:" << aux->GetGroup();
			//stream << "Grupa:" << dynamic_cast<StudentRole*>(OnePerson.m_Roles[i])->GetGroup();
		}
			
	return stream;
}
