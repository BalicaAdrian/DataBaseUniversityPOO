#include "pch.h"
#include<iostream>
#include "Person.h"
#include "StudentRole.h"

StudentRole::StudentRole()
	:Role(Role::STUDENT_ROLE)
{

	
}

StudentRole::StudentRole(int id , int year , int group):Role(Role::STUDENT_ROLE)
{
	m_Group = group;
	m_ID = id;
	m_Year = year;
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

void StudentRole::addMark(float mark, Discipline * discipline)
{
	m_Marks.push_back(new Mark(mark, discipline));
}

void StudentRole::removeMark(std::string discipline)
{
	std::vector<Mark*>::iterator it;
	for (it = m_Marks.begin(); it != m_Marks.end(); it++)
	{
		if ((*it)->GetDiscipline() == discipline)
		{
			m_Marks.erase(it);
			break;
		}
	 }
}

void StudentRole::updateMark(std::string discipline, float newMark)
{
	std::vector<Mark*>::iterator it;
	for (it = m_Marks.begin(); it != m_Marks.end(); it++)
		if((*it)->GetDiscipline()==discipline)
		{
			(*it)->SetNote(newMark); break;
		}

}

int StudentRole::GetMarkSize()
{
	return m_Marks.size();
}

float StudentRole::MarkFromDiscipline(std::string NameOfDiscipline)
{
	std::vector<Mark*>::iterator it;
	for (it = m_Marks.begin(); it != m_Marks.end(); it++) {
		if ((*it)->GetDiscipline() == NameOfDiscipline) {
			return (*it)->GetNote();

		}
	}
	
}


