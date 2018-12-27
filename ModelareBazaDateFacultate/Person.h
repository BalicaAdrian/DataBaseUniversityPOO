#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Role.h"
class Person {
public:
	Person(std::string FirstName, std::string LastName, int CNP, std::string Email = "");
	Person(std::string , std::string, int ,std::string , std::string Email = "");

	Person();
	friend std::istream& operator>>(std::istream&, Person&);
	friend std::ostream& operator<<(std::ostream&, Person&);
	void SetFirstName(const std::string&);
	void SetLastName(const std::string&);
	void SetEmail(const std::string&);
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetEmail();
	int GetCNP();
	void AddRole(Role*);
	Role::TypeRole GetRole(int);
	
protected:
	std::string m_FirstName;
	std::string m_LastName;
	std::string m_Email;
	int m_CNP;
	std::vector<Role*>m_Roles;
	
};

