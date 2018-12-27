#include "pch.h"
#include<iostream>
#include "Person.h"
#include "StudentRole.h"

StudentRole::StudentRole()
	:Role(Role::STUDENT_ROLE)
{

	
}

int StudentRole::GetGroup()
{ 
	return m_Group;
}

void StudentRole::SetGroup(int Group)
{
	m_Group = Group;
}

int StudentRole::GetID()
{
	return m_ID;
}

void StudentRole::SetID(int ID)
{
	m_ID = ID;
}

int StudentRole::GetYear()
{
	return m_Year;
}

void StudentRole::SetYear(int year)
{
	m_Year = year;
}


